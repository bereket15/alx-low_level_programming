#include "main.h"

/**
 * free_grid - function to remove memory allaction
 * @grid: memeory to be freed
 * @height: height of matrix
 * Return: noting
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
