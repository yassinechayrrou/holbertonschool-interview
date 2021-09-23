#!/usr/bin/python3
"""primegame Module"""

def is_prime(n):
    """checks if number is prime"""
    for i in range(2, (n // 2) + 1):
        if n % i == 0:
            return True 
    return False 

def calc_primes(n, primes):
    """ extract primes """
    biggest_prime = primes[-1]
    if n > biggest_prime:
        for i in range(biggest_prime + 1, n + 1):
            if is_prime(i):
                primes.append(i)
            else:
                primes.append(0)

def isWinner(x, nums):
    """
    returns the name of player that won
    """
    players_wins = {"Maria": 0, "Ben": 0}

    primes = [0, 0, 2]

    calc_primes(max(nums), primes)

    for round in range(x):
        sum_options = sum((i != 0 and i <= nums[round])
                for i in primes[:nums[round] + 1])

        if (sum_options % 2):
            winner = "Maria"
        else:
            winner = "Ben"

        if winner:
            players_wins[winner] += 1

    if players_wins["Maria"] > players_wins["Ben"]:
        return "Maria"
    elif players_wins["Ben"] > players_wins["Maria"]:
        return "Ben"
    return None
