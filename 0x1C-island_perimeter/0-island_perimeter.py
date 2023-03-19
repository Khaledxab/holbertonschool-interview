#!/usr/bin/python3
"""
0-island_perimeter
"""


def island_perimeter(grid):
    # Check for empty grid
    if not grid:
        return 0

    # Get dimensions of the grid
    rows, cols = len(grid), len(grid[0])

    # Initialize perimeter variable
    perimeter = 0

    # Iterate over each cell in the grid
    for row in range(rows):
        for col in range(cols):
            # Check if current cell is land
            if grid[row][col] == 1:
                # Check top, bottom, left, right cells
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    # Return total perimeter
    return perimeter
