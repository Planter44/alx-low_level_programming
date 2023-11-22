#!/usr/bin/python3
"""island_perimeter Module"""


def neighbors(grid, a, b):
    """Returning the number of neighbors"""

    num = 0

    if a <= 0 or not grid[a - 1][b]:
        num += 1
    if b <= 0 or not grid[a][b - 1]:
        num += 1
    if b >= len(grid[a]) - 1 or not grid[a][b + 1]:
        num += 1
    if a >= len(grid) - 1 or not grid[a + 1][b]:
        num += 1

    return num

def island_perimeter(grid):
    """Returning the perimeter of the island"""

    perim = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b]:
                perim += neighbors(grid, a, b)

    return perim
