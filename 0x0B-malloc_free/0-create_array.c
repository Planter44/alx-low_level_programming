#include "main.h"
#include <stdlib.h>
/**
 * create_array -Create array of size size, assign char c
 * @size: size of array,
 * @c: char to assign,
 * Description: Create the array of size size, assign char c
 * Return: pointer to array, if NULL then fail.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
