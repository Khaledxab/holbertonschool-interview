#!/usr/bin/python3
"""
 method that calculates the fewest number of operations
"""


def minOperations(n):
    count = 0
    while n != 1:
        if n % 2 == 0:
            n = n // 2
            count += 2
        else:
            n = n - 1
            count += 1
    return count
