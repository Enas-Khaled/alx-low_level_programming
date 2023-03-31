#include "main.h"
#include <ctype.h>
/**
 * *cap_string - *string_toupper
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
		j = 0;

		while (sep[j] != '\0')
		{
			if ((sep[j] == str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
