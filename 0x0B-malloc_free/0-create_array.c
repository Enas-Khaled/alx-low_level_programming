#include "main.h"
/**
 * create_array - malloc array
 * @size: array size
 * @c: char to init with
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0 || ptr == 0)
		return (0);
	while (size--)
		ptr[size] = c;
	return (ptr);
}
