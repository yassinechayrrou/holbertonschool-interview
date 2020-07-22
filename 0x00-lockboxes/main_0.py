#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))

boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
print(canUnlockAll(boxes))

boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
print(canUnlockAll(boxes))

boxes = [[0, 6], [0, 1, 3], [1, 3, 4], [2], [3], [4], [5]]
print("This Check should be [True]")
print(canUnlockAll(boxes))

boxes = []
print("This Check should be [False]")
print(canUnlockAll(boxes))

boxes = [[]]
print("This Check should be [True]")
print(canUnlockAll(boxes))

boxes = None
print("This Check should be [False]")
print(canUnlockAll(boxes))

boxes = [[2], []]
print("This Check should be [False]")
print(canUnlockAll(boxes))

boxes = [[], [], []]
print("This Check should be [False]")
print(canUnlockAll(boxes))

boxes = [{}, 1, 2]
print("This Check should be [False]")
print(canUnlockAll(boxes))

boxes = [{}]
print("This Check should be [False]")
print(canUnlockAll(boxes))
