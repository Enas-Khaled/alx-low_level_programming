#include "main.h"
/**
 * *_memset - fill memory s with n size by b(char *s, char b, unsigned int n)
 * @s: string
 * @b: element
 * @n: size
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
