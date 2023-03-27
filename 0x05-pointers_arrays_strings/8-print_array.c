#include "main.h"
/**
 * print_array - void print_array(int *a, int n)
 * @a: array
 * @n: length
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			_putchar('\n');
		else if (i == (n - 1))
			printf("%d\n ", a[i]);
		else
			printf("%d, ", a[i]);
	}

}

