#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints time tabls from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j, n1, n2, res;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
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
