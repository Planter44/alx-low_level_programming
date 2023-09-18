#include "main.h"

/**
 * _islower -Return 1 for lowercase,Otherwise 0.
 * @c: char.
 * Return: 1 for lowercase, 0 for uppercase.
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
