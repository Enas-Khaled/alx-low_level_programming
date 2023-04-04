#include "main.h"
/**
 * _strspn - make sure all char in s is in accept(char *s, char *accept)
 * @s: string
 * @accept: accepted chars
 * Return: no. of byts untel it find un acceptable char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
