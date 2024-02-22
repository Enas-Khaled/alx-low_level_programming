#!/usr/bin/python3
"""Function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.

    Args:
        grid (list): grid
    """
    I = len(grid)
    J = len (grid[0])
    count = 0
    for i in range(I):
        for j in range(J):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0: count += 1
                if j == 0 or grid[i][j - 1] == 0: count += 1
                if i == I - 1 or grid[i + 1][j] == 0: count += 1
                if j == J - 1 or grid[i][j + 1] == 0: count += 1
    return count
