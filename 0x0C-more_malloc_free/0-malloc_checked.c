#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -Allocates memory using malloc
 * @b: The number of bytes to allocate,
 * 
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
