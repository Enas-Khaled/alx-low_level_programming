#include "main.h"
/**
 * _strncat - concatinate (char *dest, char *src)
 * @dest: string
 * @src: string
 * @n: size wanted from src
 * Return: dest after concatinate
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
