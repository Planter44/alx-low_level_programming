#include <stdio.h>
#include "main.h"

/**
 * _putchar -Writes character c to stdout.
 * @c: the character to print,
 *
 * Return: On success 1.
 * On error -1 is returned, errno is set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
