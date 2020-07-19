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
    if len(boxes) == 1 and type(boxes[0]) is list:
        return True
    keys = {0}
    counter = 0
    test = []
    for elem in boxes:
        if type(elem) is list:
            test.append(elem)
    print(test)
    while counter <= len(test):
        for i in range(len(test)):
            if i in keys:
                for key in test[i]:
                    if key < len(test):
                        keys.add(key)
        counter += 1
    if len(keys) == len(test):
        return True
    else:
        return False
