#include "lists.h"
/**
 * _strlen - count len
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while(*s++)
		i++;
	return (i);
}
