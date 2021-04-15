#!/usr/bin/python3
""" Module to solve rain algorithm challenge """


def rain(walls): 
    trapped_water = 0
    left = 0
    right = len(walls) - 1
    while left < right:
        area = min(walls[left], walls[right]) * (right - left)
        trapped_water = max(trapped_water, area)
        if walls[left] < walls[right]:
            left += 1
        else:
            right -= 1
    return trapped_water
