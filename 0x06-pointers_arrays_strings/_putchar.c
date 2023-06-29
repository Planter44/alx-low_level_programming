#include "main.h"
#include <unistd.h>

/**
 * _putchar -Writes the character c to stdout,
 * @c: Character to print,
 *
 * Return: On 1 (success)
 * On error, -1 is returned, errno is set appropriatelly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
