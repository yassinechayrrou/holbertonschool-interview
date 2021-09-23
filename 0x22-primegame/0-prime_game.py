#!/usr/bin/python3
""" Prime Game Module """

def isWinner(x, nums):
    """ Returns prime game winner
    """
    if not nums or x < 1:
        return None

    k = 0
    prime = [0] * 11 ** 5
    p = [0] * 11 ** 5

    for i in range(2, 11 ** 5):
        if p[i] == 0:
            k += 1
            for j in range(i, 11 ** 5, i):
                p[j] = 1
        prime[i] = k
    results = True if prime[max(nums)] % 2 == 0 else False
    #if prime[max(nums)] % 2 == 0:
    return "Ben" if not results else "Maria"
    #else:
    #    return "Maria"
    return None
