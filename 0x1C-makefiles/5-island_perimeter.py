#!/usr/bin/python3
'''Module that returns the perimeter of the island described in grid:
    
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water, and there is one island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

'''

def island_perimeter(grid):
    '''
    Returns the perimeter of the island described ina grid
        arguments:
            grid(list): A list of lists of integers
    '''

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except:
                    pass

    return perimeter

