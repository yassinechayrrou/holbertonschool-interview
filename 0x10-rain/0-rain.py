#!/usr/bin/python3
""" Module to solve rain algorithm challenge """


def rain(walls): 
    """Returns trapped rain water units"""
    if len(walls) < 3:
        return 0
    trapped_water = 0
    for i in range(1, len(walls) - 1):
        left = max(walls[:i])
        right = max(walls[i + 1:])
        min_height = min(left, right)
        if walls[i] < min_height:
            trapped_water += min_height - walls[i]
    return trapped_water

