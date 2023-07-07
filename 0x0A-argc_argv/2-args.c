#include <stdio.h>
#include "main.h"

/**
 * main -Prints arguments received.
 * @argc: the number of arguments,
 * @argv: the array of arguments,
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
