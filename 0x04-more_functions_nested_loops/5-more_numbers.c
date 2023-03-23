#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print nums 10 times
 * Return: void
 */
void more_numbers(void)
{
	int j = 0, n1, n2, i;

	while (j < 10)
	{
		i = 0;

		while (i < 15)
		{
			n1 = i % 10;
			n2 = i / 10;

			if (i >= 10)
			{
				_putchar(n2 + '0');
			}
			_putchar(n1 + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}

