#include "main.h"
/**
 * _strdup - str to duplicate
 * @str: string
 * Return: pointer to newly string
 */
char *_strdup(char *str)
{
	int size = 0;

	while (str)
		size++;

	char *ptr = malloc(size);

	if (str == NULL || ptr == 0)
		return (NULL);

	while (str)
		ptr[size] = str[size];

	return (ptr);
}
