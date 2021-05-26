#!/usr/bin/python3
""" Rotate 2D matrix Module Algorith Solution """


def rotate_2d_matrix(matrix):
    """rotates a 2d matrix"""
    n = len(matrix)
    transpose = [list(e) for e in zip(*matrix)]
    rotate = [[transpose[i][n - 1 - j] for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            matrix[i][j] = rotate[i][j]
