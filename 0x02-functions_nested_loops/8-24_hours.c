#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints 24h in mins
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0, j, n1, n2, n3, n4;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			n1 = i / 10;
			n2 = i % 10;
			n3 = j / 10;
			n4 = j % 10;

			_putchar(n1 + '0');
			_putchar(n2 + '0');
			_putchar(':');
			_putchar(n3 + '0');
			_putchar(n4 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

