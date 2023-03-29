#include "main.h"
/**
 * *cap_string - *string_toupper
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'z' && *str <= 'a')
			*str = *str - 32;
		*str++;
	}
	return (str);
}
