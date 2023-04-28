#include "main.h"
/**
 * array_range - Creates an array of integers from min to max.
 *
 * @min: The minimum integer value to include in the array.
 * @max: The maximum integer value to include in the array.
 *
 * Return: A pointer to the newly created array, or NULL if the function fails.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}

