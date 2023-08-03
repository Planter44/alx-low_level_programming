#include "main.h"

/**
 * get_bit -Return value of bit in a decimal number.
 * @n: no. to search.
 * @index: Index,
 * Return:Value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
