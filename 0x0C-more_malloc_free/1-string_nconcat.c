#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to a newly allocated space in memory containing the
 *         concatenated strings, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}

