from __future__ import print_function
import torch
from model import highwayNet
from utils import ngsimDataset,maskedMSETest
from torch.utils.data import DataLoader
import time
# import pandas as pd
import numpy as np

import matplotlib.pyplot as plt

def GetGridInd(ini_pos, grid_size=4.7, center=(6,1)):
    
    sgn = np.sign(np.array(ini_pos))
    abs_pos = np.abs(ini_pos)
    abs_ind = np.ceil(((abs_pos-grid_size/2) / grid_size))
    ind_grids = sgn * abs_ind
    ind_grids = ind_grids.astype(int)
    return ind_grids[0] + center[0], -ind_grids[1] + center[1]
def FindNbrs(all_traj, args):
    ego_traj = all_traj[:,0:2]
    ego_heading = all_traj[-1,2]

    ref_pos = ego_traj[-1,:]
    nbrs = np.zeros((args['in_length'], 5, 2))
    id_st = 3
    for i in range(5):
        nbrs[:,i,0] = all_traj[:,id_st]
        nbrs[:,i,1] = all_traj[:,id_st+1]
        id_st = id_st + 2
    ind_list = []
    Rmat = np.array([[np.cos(ego_heading), np.sin(ego_heading)],[-np.sin(ego_heading), np.cos(ego_heading)]])
    re_nbrs = (nbrs-ref_pos)
    re_nbrs_heading = re_nbrs @ Rmat.T
    for i in range(5):
        if np.all(nbrs[:,i,:]):
            ind_list.append(i)
    nbrs_a = re_nbrs[:,ind_list,:]
    nbrs_a_heading = re_nbrs_heading[:,ind_list,:]

    grids = np.zeros((3,13),dtype='bool')
    valid_neighbors = []
    for i in range(nbrs_a_heading.shape[1]):
        gx, gy = GetGridInd(nbrs_a_heading[-1,i,:])
        if 0 <= gx < 13 and 0 <= gy < 3:
            grids[gy, gx] = True
            valid_neighbors.append((gy, gx, i))
    
    # Sort neighbors by grid position (lane, then longitudinal) to match masked_scatter_ order
    valid_neighbors.sort(key=lambda x: (x[0], x[1]))
    ind_list = [x[2] for x in valid_neighbors]
    
    # nbrs_final = nbrs_a[:,ind_list,-1::-1]
    nbrs_final = nbrs_a_heading[:,ind_list,:]
    # nbrs_final = nbrs_final[:,:,-1::-1]
    masks = np.repeat(grids[np.newaxis, :, :], repeats=1, axis=0)
    masks = np.repeat(masks[:, :, :, np.newaxis], repeats=args['encoder_size'], axis=3)
    hist = (ego_traj - ref_pos) @ Rmat.T
    hist = hist[:,None,:]
    return hist, nbrs_final, masks