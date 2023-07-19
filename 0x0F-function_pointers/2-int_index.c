#include "function_pointers.h"
/**
 * int_index -Return index place if comparison = true, else -1.
 * @array: array.
 * @size: size of elements in array.
 * @cmp:Pointer to func of 1 of 3 in main.
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
