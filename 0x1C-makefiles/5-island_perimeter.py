#!/usr/bin/python3
"""
Defines a function to measure the perimeter
of an island described in grid
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island
    Args:
        grid (list): An integer list of list representing the island
    Return:
        The island perimeter defined in grid
    """

    size = 0
    edges = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
