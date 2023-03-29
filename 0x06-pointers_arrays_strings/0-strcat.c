#include "main.h"
/**
 * _strcat - concatinate (char *dest, char *src)
 * @dest: string
 * @src: string
 * Return: dest after concatinate
 */
char *_strcat(char *dest, char *src)
{
	int i, len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (*dest);
}
