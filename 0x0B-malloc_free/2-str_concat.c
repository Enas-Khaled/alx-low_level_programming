#include "main.h"
/**
 * str_concat - (char *s1, char *s2)
 * @s1: first str
 * @s2: second str
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	ptr = malloc((size1 + size2) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (j = 0; i < (size1 + size2); i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
