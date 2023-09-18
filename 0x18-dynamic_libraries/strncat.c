#include "main.h"

/**
* *_strncat -Concatenates 2 strings.
* @dest: string to append.
* @src: string to append.
* @n: number of bytes.
* Return: Pointer dest.
**/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n <= 0)
	{
		return (dest);
	}

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}
