#include "main.h"

/**
 * int _islower(int c) - prototype function
 *
 * desc - checks for lowercase character.
 *
 * Return 1
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
