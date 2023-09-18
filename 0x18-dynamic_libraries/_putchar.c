#include <unistd.h>
/**
 *  _putchar -Puts character c to stdout.
 *  @c: Character to be printed.
 *  Return: On success 1 or -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
