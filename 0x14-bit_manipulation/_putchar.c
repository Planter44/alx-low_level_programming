#include "main.h"
#include <unistd.h>
/**
 * _putchar -Writeing character c to stdout.
 * @c:Character to print.
 * Return: 1, Suucess otherwise, return -1 and set errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
