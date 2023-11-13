#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @i: an integer
 * Return: abs
 */
int _abs(int i)
{
	int absu = i * (-1);

	if (i >= 0)
		return (i);
	else
		return (absu);
}

