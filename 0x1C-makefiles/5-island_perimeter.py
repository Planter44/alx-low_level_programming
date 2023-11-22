#!/usr/bin/python3
"""island_perimeter Module"""


def neighbors(grid, x, y):
    """Returning the number of neighbors"""

    num = 0

    if x <= 0 or not grid[x - 1][y]:
        num += 1
    if y <= 0 or not grid[x][y - 1]:
        num += 1
    if y >= len(grid[x]) - 1 or not grid[x][y + 1]:
        num += 1
    if x >= len(grid) - 1 or not grid[x + 1][y]:
        num += 1

    return num


def island_perimeter(grid):
    """Returning the perimeter of the island"""

    perim = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                perim += neighbors(grid, x, y)

    return perim
