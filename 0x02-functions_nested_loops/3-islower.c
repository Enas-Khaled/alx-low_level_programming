#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - int _islower 1 if yes no otherwise
 * @c: an integer
 * Return: 1 if yes 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

