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
    coins.sort(reverse=True)
    change = 0
    for coin in coins:
        while total >= coin:
            total -= coin
            change += 1
    if total > 0:
        return -1
    return change
