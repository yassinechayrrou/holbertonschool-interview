#!/usr/bin/python3

"""This module solves lockboxes interview problem
    Problem: You have a list of lists, we consider as a set of boxes where
    each box hold the key to open another box, the key condition is that each
    key can open the box with the same index in the list
    The First box or box number 0 is always open
    Question: You are required to return True if the keys can open all boxes
              or return False in case it can't
"""


def canUnlockAll(boxes):
    opened = set() 
    opened.add(0)
    stack = []
    stack.append(0)
    while stack:
        keys = boxes[stack.pop()]
        for key in keys:
            if key not in opened:
                opened.add(key)
                stack.append(key)
    return len(opened) == len(boxes)
