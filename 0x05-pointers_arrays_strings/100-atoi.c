#include "main.h"
/**
 * _atoi - convert to integer
 * @s: char
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int seen_digit = 0;

	while (*s != '\0')
       	{
		if (*s == '-' && !seen_digit)
			sign*= -1;
		else if (*s >= '0' && *s <= '9')
		{
			seen_digit = 1;
			num = num * 10 + (*s - '0');
		}
		else if (seen_digit)
		{
			break;
		}
		s++;
	}

	return (sign * num);
}

