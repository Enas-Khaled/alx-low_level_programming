#include "function_pointers.h"
/**
 * int_index - (int *array, int size, int (*cmp)(int));
 * @array: array
 * @size: size
 * @cmp: compare
 * Return: 1 if match -1 if no
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
