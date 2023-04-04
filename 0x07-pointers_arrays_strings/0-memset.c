#include "main.h"
/**
 * *_memset - fill memory s with n size by b(char *s, char b, unsigned int n)
 * @s: string
 * @b: element
 * @n: size
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return (s);
}
