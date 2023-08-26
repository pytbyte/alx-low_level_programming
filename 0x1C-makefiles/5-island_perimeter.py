#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island."""


def island_perimeter(grid):
    """Calculate the perimeter of an island.

    The grid represents water with 0 and land with 1.

    Args:
        grid (list): A list of lists of integers representing an island.

    Returns:
        The perimeter of the island defined in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    land_cells = 0
    shared_edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land_cells += 1
                if j > 0 and grid[i][j - 1] == 1:
                    shared_edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    shared_edges += 1

    return land_cells * 4 - shared_edges * 2
