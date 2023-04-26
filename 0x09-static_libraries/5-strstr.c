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

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (!needle[j])
				return (&haystack[i]);
		}
	}
	return (NULL);
}
