#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island
    """
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0
    if h <= 100 and w <= 100:
        for i in range(h):
            for j in range(w):
                if grid[i][j] == 1:
                    s += 1
                    if (j > 0 and grid[i][j - 1] == 1):
                        e += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        e += 1
    return s * 4 - e * 2
