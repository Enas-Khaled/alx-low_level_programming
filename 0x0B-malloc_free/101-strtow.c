#include "main.h"
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	int i, j, k, len, words = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < len && k < words; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; j < len && str[j] != ' '; j++)
				;
			arr[k] = malloc((j - i + 1) * sizeof(char));
			if (arr[k] == NULL)
			{
				while (k > 0)
				{
					k--;
					free(arr[k]);
				}
				free(arr);
				return (NULL);
			}
			strncpy(arr[k], &str[i], j - i);
			arr[k][j - i] = '\0';
			k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}

