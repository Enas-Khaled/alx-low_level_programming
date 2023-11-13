#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if it is upper
 * @c: char to chech
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

