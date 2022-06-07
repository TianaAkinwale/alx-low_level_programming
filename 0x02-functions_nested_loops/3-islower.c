#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * desc - checks for lowercase character.
 *
 * Return: 1 if lowercase
 * Return: 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
