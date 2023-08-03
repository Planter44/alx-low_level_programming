#include "main.h"

/**
 * set_bit -Set bit at given index to 1
 * @n: Pointer to no. to change.
 * @index: index of bit to set to 1.
 * Return: 1 otherwise, -1 for fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
