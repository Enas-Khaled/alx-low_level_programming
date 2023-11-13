#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if it is upper
 * @c: char to chech
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

