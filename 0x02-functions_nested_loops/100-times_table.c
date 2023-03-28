#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints time tabls from 0 to n
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, num, len, k;
	char str[5];

	if ((n < 0) || (n > 15))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			len = 0;
			do {
				str[len++] = num % 10 + '0';
				num /= 10;
			} while (num > 0);
			for (k = len - 1; k >= 0; k--)
				_putchar(str[k]);
			if (j < n)
				_putchar(',');
		}
	}
	_putchar('\n');
}
