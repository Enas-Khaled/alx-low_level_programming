#include "main.h"
/**
 * print_square - void print_diagonal
 * @n: no of \
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
