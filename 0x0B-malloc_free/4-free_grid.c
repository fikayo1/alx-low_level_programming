#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid
 * @grid: the grid to be free
 * @height: the height
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
for (; height >= 0; height--)
{
free(grid[height]);
}
free(grid);
}
