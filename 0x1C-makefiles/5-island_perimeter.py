#!/usr/bin/python3
"""Module containing 'island_perimeter' function"""


def island_perimeter(grid):
    """
        Returning the perimeter described in grid
    """
    g = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if j == 0:
                        g += 1
                    else:
                        if grid[i][j-1] == 0:
                            g += 1
                except IndexError:
                    pass
                try:
                    if j == len(grid[i]) - 1:
                        g += 1
                    else:
                        if grid[i][j+1] == 0:
                            g += 1
                except IndexError:
                    pass
                try:
                    if i == 0:
                        g += 1
                    else:
                        if grid[i-1][j] == 0:
                            g += 1
                except IndexError:
                    pass
                try:
                    if i == len(grid) - 1:
                        g += 1
                    else:
                        if grid[i+1][j] == 0:
                            g += 1
                except IndexError:
                    pass
    return g
