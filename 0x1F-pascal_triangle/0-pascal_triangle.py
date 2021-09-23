#!/usr/bin/python3
""" Pascal's triangle problem solution Module """


def pascal_triangle(n):
    """ returns pascal triangle of given number n
    """
    triangle = []

    if n <= 0:
        return triangle

    for i in range(n):
        row = [1]
        if triangle:
            last_row = triangle[len(triangle) - 1]
            computed_row = [sum(pair) for pair in zip(last_row, last_row[1:])]
            row.extend(computed_row)
            row.append(1)
        triangle.append(row)
    return triangle
