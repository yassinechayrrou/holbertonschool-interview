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

    if boxes is None or len(boxes) <= 0:
        return False
    if type(boxes) is not list:
        return False
    for z in boxes:
        if type(z) is not list:
            boxes.remove(z)
    keys = {0}
    counter = 0
    while counter <= len(boxes):
        for i in range(len(boxes)):
            if i in keys:
                for key in boxes[i]:
                    if key < len(boxes):
                        keys.add(key)
        counter += 1
    return len(keys) == len(boxes)
