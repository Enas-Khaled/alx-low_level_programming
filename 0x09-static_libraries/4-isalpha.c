#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - int _islower 1 if yes no otherwise
 * @c: an integer
 * Return: 1 if yes 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

