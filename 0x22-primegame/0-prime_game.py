#!/usr/bin/python3
""" Prime Game Module """


def isWinner(x, nums):
    """ Returns prime game winner
    """

    if not nums or x < 1:
        return None

    s = 0
    prime = [0] * 11 ** 5
    _pow = [0] * 11 ** 5

    for i in range(2, 11 ** 5):
        if _pow[i] == 0:
            s += 1
            for j in range(i, 11 ** 5, i):
                _pow[j] = 1
        prime[i] = s
    results = True if prime[max(nums)] % 2 == 0 else False
    return "Ben" if results else "Maria"
