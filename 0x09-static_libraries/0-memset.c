#include "main.h"
/**
 * _memset -Fill a block of memory with a specific value
 * @s: Starting the address of memory to be filled.
 * @b: Desired value
 * @n: no. of bytes to be changed.
 *
 * Return: Changed array and value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
