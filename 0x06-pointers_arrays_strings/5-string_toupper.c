#include "main.h"
/**
 * *string_toupper - (char *)
 * @str: string
 * Return: char
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		*str++;
	}
	return (str);
}
