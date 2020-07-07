#!/usr/bin/python3
""" island perimeter """


def island_perimeter(grid):
    """ calculates perimeter of island """

    square = 0
    border = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                square = square + 1
                if i != len(grid) - 1:
                    if grid[i + 1][j] == 1:
                        border += 1
                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] == 1:
                        border += 1
    perimeter = (square * 4) - (border * 2)
    return perimeter
