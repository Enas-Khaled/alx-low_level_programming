#include "main.h"
/**
 * _strlen(char *s)- int _strlen(char *s);
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
