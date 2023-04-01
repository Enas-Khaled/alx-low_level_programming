#include "main.h"
/**
 * *leet - encode(char *)
 * @str: string
 * Return: char
 */
char *leet(char *str)
{
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
