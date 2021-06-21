#!/usr/bin/python3
""" Making Change Solution Module """


def makeChange(coins, total):
    if total <= 0:
        return 0
    i = len(coins) - 1
    coins.sort()
    fewest = []
    while i > -1:
        fewest.append(coins[i])
        if sum(fewest) == total:
            return len(fewest)
        if sum(fewest) < total:
            i += 1
        else:
            fewest.pop()
        i -= 1
    return -1
