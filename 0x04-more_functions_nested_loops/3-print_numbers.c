#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print nums
 * Return: void
 */
void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

