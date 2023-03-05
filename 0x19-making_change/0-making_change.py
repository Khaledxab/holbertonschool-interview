#!/usr/bin/python3
"""
Make change MM
"""


def makeChange(coins, total):
    """
    make change MM
    """
    if total <= 0:
        return 0
    if total in coins:
        return 1
    if len(coins) == 0:
        return -1
    X = [0] * (total + 1)

    for i in range(1, total + 1):
        X[i] = total + 1

    for j in range(1, total + 1):
        for coin in coins:
            if j - coin >= 0:
                X[j] = min(X[j], X[j - coin] + 1)
    
    if X[total] > total:
        return -1
    return X[total]
