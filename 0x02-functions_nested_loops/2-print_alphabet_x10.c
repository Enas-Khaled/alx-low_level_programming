#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - void print_alphabet_10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c2;

	while (i < 10)
	{
		c2 = 97;

		while (c2 <= 122)
		{
			_putchar(c2);
			c2++;
		}

		_putchar('\n');
		i++;
	}
}

