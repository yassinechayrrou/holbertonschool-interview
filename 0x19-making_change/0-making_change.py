#!/usr/bin/python3
""" Making Change Solution Module """


# def makeChange(coins, total):
#     if total <= 0:
#         return 0
#     i = len(coins) - 1
#     coins.sort()
#     fewest = []
#     while i > -1:
#         fewest.append(coins[i])
#         if sum(fewest) == total:
#             return len(fewest)
#         if sum(fewest) < total:
#             i += 1
#         else:
#             fewest.pop()
#         i -= 1
#     return -1

def makeChange(coins, total):
    if total <= 0:
        return 0
    dynamic = [total + 1] * (total + 1)
    dynamic[0] = 0
    for i in range(1, total + 1):
        for coin in coins:
            if i - coin >= 0:
                dynamic[i] = min(dynamic[i], 1 + dynamic[i - coin])
    return dynamic[total] if dynamic[total] != total + 1 else -1
