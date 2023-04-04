#include "main.h"
/**
 * *_strchr - searsh of c in s(char *s, char c)
 * @s: string
 * @c: char
 * Return: NULL or pointer of c position
 */
char *_strchr(char *s, char c)
{
	int i, j, len = 0;

	for (j = 0; s[j] != '\0'; j++)
		len += 1;
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
