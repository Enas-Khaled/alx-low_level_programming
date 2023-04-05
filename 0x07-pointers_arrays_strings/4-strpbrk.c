#include <stdio.h>
/**
 * *_strpbrk - if found char from accept it prints the rest of s
 * @s: string
 * @accept: acceptable chars
 * Return: the rest of s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
