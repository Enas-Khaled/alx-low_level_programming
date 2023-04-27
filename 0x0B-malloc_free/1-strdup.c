#include "main.h"
/**
 * _strdup - str to duplicate
 * @str: string
 * Return: pointer to newly string
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL); 
	while (str[size] != '\0')
		size++;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}
