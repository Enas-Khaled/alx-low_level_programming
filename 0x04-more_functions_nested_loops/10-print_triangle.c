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
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			for (k = 0; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
