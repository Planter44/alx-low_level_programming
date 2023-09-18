#include "main.h"

/**
* _memset -Filling memory with constant byte.
* @s: Character.
* @b: Character.
* @n: int.
* Return: Pointer s.
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
