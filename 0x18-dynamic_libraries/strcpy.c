#include "main.h"
#include <stdio.h>
/**
 * _strcpy -Entry point.
 *
 * Description: copies the string pointer.
 * @dest: Destination.
 * @src: String.
 * Return: To dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
		j++;
	return (dest);
}
