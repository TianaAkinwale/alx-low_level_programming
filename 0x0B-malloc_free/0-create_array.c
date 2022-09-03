#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char storage
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *rray;
	unsigned int s;

	if (size == 0)
	{
		return (NULL);
	}

	rray = malloc(sizeof(c) * size);

	if (rray == NULL)
	{
		return (NULL);
	}

	for (s = 0; s < size; s++)
	{
		rray[s] = c;
	}

	return (rray);
}
