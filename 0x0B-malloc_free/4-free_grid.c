#include<stdlib.h>
/**
 * free_grid - free memory allocation
 *
 * @grid: double pointer
 *
 * @height: input
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 || grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
