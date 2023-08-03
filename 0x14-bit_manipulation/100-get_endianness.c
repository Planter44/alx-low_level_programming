#include "main.h"

/**
 * get_endianness -Checks if machine is little or big.
 * Return: 0 when big, otherwise 1.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
