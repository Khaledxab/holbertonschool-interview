#!/usr/bin/python3
"""
Pascal's Triangle
"""


def pascal_triangle(n):
    triangle = [[1]]
    for i in range(1, n):
        row = [1] + [triangle[i-1][j] + triangle[i-1][j-1] for j in range(1, i)] + [1]
        triangle.append(row)
    return triangle if n > 0 else []
