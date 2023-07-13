#include "main.h"
#include <unistd.h>
/**
 * _putchar -Writes character c to stdout.
 * @c: Character to print,
 *
 * Return: On success 1.
 * On error -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
