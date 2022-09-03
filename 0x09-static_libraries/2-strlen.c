#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 * Return: Length.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
