#!/usr/bin/python3
"""
 method that calculates the fewest number of operations
"""


def list(num):
    const = 1
    alist = []
    val = num
    while val != 1:
        const += 1
        if val % const == 0:
            while (val % const == 0 and val != 1):
                val /= const
                alist.append(const)

    return alist


def minOperations(n):
    """ main program """
    if n < 2 or type(n) is not int:
        return 0
    val = list(n)
    return sum(val)