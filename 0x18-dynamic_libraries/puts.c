#include "main.h"
/**
* _puts -Pprints string.
* @str: char.
* Return: To string.
**/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	_putchar(*(str + i));
	_putchar('\n');
}
