#include "main.h"
/**
 * *_memcpy - copy (char *dest, char *src, unsigned int n)
 * @dest: destination
 * @src: source
 * @n: size
 * Return: detination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
