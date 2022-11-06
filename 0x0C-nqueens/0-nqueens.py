#!/usr/bin/python3
"""N queens puzzle"""
import sys


def nqueens(n: int):
    """
    tracking
    """
    m = [[0 for i in range(n)] for j in range(n)]
    print(str(m))


if __name__ == "__main__":
    if len(sys.argv) > 2 or len(sys.argv) < 2:
        print("Usage: nqueens N")
        exit(1)

    if not sys.argv[1].isdigit():
        print("N must be a number")
        exit(1)

    if int(sys.argv[1]) < 4:
        print("N must be at least 4")
        exit(1)

    nqueens(int(sys.argv[1]))
