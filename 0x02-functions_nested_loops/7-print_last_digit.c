#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @i: an integer
 * Return: last
 */
int print_last_digit(int i)
{
	int last;

	if (i < 0)
		last = (i % 10) * -1;
	else
		last = i % 10;

	_putchar(last + '0');
	return (last);
}

