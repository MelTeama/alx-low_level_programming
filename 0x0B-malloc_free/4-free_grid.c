#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * @grid: pointer to pointer
 * @height: grid height
 * Return: void
 */

void free_grid(int **grid, int height)

{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
