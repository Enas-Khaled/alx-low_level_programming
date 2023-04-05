#include "main.h"
/**
 * *_strstr - search of the appear of needle in haystack
 * @needle: what we are looking for
 * @haystack: string to search in
 * Return: the rest of haystack if found needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return (NULL);
}
