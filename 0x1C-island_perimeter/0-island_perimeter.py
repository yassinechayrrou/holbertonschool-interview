#!/usr/bin/python3
""" Solution Module """


def island_perimeter(grid):
    """ Calculates island perimeter """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i != 0:
                    if grid[i - 1][j]:
                        perimeter -= 1
                if i < len(grid) - 1:
                    if grid[i + 1][j]:
                        perimeter -= 1
                if j < len(grid[0]) - 1:
                    if grid[i][j + 1]:
                        perimeter -= 1
                if j != 0:
                    if grid[i][j - 1]:
                        perimeter -= 1
    return perimeter
