#include "main.h"
/**
 * _strdup - str to duplicate
 * @str: string
 * Return: pointer to newly string
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL); 
	while (str[size] != '\0')
		size++;

	char *ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);
	else
	{
		while (str[size] != '\0')
			ptr[size] = str[size];
	}
	return (ptr);
}
