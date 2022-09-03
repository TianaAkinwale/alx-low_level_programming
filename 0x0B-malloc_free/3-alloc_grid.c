#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width < 1 || height < 1)/*validate input*/
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));/*allocate memory for rows*/

	if (grid == NULL) /* validate memory */
	{
		return (NULL);

	}
	for (a = 0; a < height; a++)/*allocate memory for columns of each row*/
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)/* validate memory */
		{
			for (a = 0; a < height; a++)
			{
				free(grid[a]);
			}
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)/* set array values to 0 */
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
