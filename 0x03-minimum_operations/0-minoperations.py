#!/usr/bin/python3
"""function that returns a solution to minimum operation of copy all
    and paste of character H given in the problem
"""


def minOperations(n):
    if n < 2:
        return 0
    result = 0
    for i in range(2, n + 1):
        while n % i == 0:
            result += i
            n = n // i
    return result
