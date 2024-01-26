#!/usr/bin/python3
"""define island perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island desxribed in grid"""
    x = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for a, b in enumerate(grid):
        for j, n in enumerate(b):
            if n == 1:
                if a == 0 or grid[a - 1][j] != 1:
                    x += 1
                if j == 0 or grid[a][j - 1] != 1:
                    x += 1
                if j == width or grid[a][j + 1] != 1:
                    x += 1
                if a == length or grid[a + 1][j] != 1:
                    x += 1
    return x
