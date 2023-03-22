#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints time tabls from 0 to n
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j, n1, n2, res;

	if ((n > 15) || (n < 0))
		_putchar('');
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				res = i * j;

				if (res > 9)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					n1 = res / 10;
					n2 = res % 10;
					_putchar(n1 + '0');
					_putchar(n2 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(res + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
