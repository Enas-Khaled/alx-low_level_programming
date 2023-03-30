#include "main.h"
/**
 * *string_toupper - (char *)
 * @str: string
 * Return: char
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		p++;
	}
	return (str);
}
