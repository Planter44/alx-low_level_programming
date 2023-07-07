#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks digits in string.
 * @str: array str,
 *
 * Return: Always 0.
 */
int check_num(char *str)
{
	/*variables Declaring*/
	unsigned int count;

	count = 0;
	/*count string*/
	while (count < strlen(str))

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main -prints name of the program.
 * @argc: count arguments,
 * @argv: arguments,
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])

{

	/*Declaring the variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	/*Goes through the array*/
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			/*ATOI --> convert string to int*/
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		/*if 1 of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	/*prints sum*/
	printf("%d\n", sum);

	return (0);
}
