#include <stdlib.h>
#include "main.h"

/**
 * *array_range -Creates array of integers.
 * @min: minimum range of values stored,
 * @max: maximum range of @min and number of elements.
 *
 * Return: The pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
