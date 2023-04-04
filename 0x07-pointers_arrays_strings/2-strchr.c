#include "main.h"
/**
 * *_strchr - searsh of c in s(char *s, char c)
 * @s: string
 * @c: char
 * Return: NULL or pointer of c position
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return ('\0');
}
