#include "main.h"
/**
 * print_triangle - void print_diagonal
 * @size: no of \
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - 1; j++)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
