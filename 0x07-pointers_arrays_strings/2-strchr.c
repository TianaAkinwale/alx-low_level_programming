#include "main.h"

/**
 * _strchr - locates character in string
 * @s: pointer to char
 * @c: c: char params to found
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
