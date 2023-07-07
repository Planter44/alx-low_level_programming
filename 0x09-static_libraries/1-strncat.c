#include "main.h"
/**
 * _strncat -Concatenating two strings
 * using most n bytes from src.
 * @dest: input value,
 * @src: input value.
 * @n: the input value
 *
 * Return: dest (Success).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
