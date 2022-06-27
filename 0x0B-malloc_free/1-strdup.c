#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory.
 */

char *_strdup(char *str)
{
	char *stng;
	unsigned int s, t;

	if (str == NULL)
	{
		return (NULL);
	}

	for (s = 0; str[s] != '\0'; s++)
	{
		;
	}

	stng = (char *)malloc(sizeof(char) * (s + 1));

	if (stng == NULL)
	{
		return (NULL);
	}

	for (t = 0; t <= s; t++)
	{
		stng[t] = str[t];
	}
	return (stng);
}
