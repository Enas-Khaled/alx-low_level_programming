#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entery point
 * @argc: size
 * @argv: values
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		j = 0;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
