#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints time tabls from 0 to n
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, n1, n2, n3, temp, res;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res > 9)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					if (res > 99)
					{
						n3 = res / 100;
						_putchar(n3 + '0');
						temp = res % 100, n1 = temp / 10, n2 = temp % 10;
					}
					else
						n1 = res / 10, n2 = res % 10;
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
						_putchar(' ');
					}
					_putchar(res + '0');
				}
			}
			_putchar('\n');
		}
	}
}
