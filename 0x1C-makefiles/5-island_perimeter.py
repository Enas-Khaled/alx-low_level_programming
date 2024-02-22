#!/usr/bin/python3
"""Function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.

    Args:
        grid (list): grid
    """
    gridLen = len(grid)
    J = len(grid[0])
    count = 0
    for i in range(gridLen):
        for j in range(J):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1
                if i == gridLen - 1 or grid[i + 1][j] == 0:
                    count += 1
                if j == J - 1 or grid[i][j + 1] == 0:
                    count += 1
    return count
