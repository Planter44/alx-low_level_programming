#include <unistd.h>


/**
 * _putchar -Writes character c to stdout
 * @c: Character to be printed.
 *
 * Return: On success 1
 * On error -1 returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
