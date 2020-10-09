#!/usr/bin/python3
"""function that returns a solution to minimum operation of copy all
    and paste of character H given in the problem
"""


def minOperations(n):
    if n < 2:
        return 0
    i = 2
    while i <= n:
        if n % i == 0:
            return minOperations(n // i) + i
        i = i + 1
