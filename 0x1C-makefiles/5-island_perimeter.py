#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    visit = set()
    def dfs(i, j):
        """
        DFS helper function
        """
        if i >= len(grid) or j >= len(grid[0]) or\
            i < 0 or j < 0 or grid[i][j] == 0:
            return 1
        if (i, j) in visit:
            return 0
        
        visit.add((i, j))
        perimeter = 0
        perimeter += dfs(i, j + 1)
        perimeter += dfs(i + 1, j)
        perimeter += dfs(i, j - 1)
        perimeter += dfs(i - 1, j)
        return perimeter
   
    for i, row in enumerate(grid):
        for j, value in enumerate(row):
            if value:
                return dfs(i, j)
