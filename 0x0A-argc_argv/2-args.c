#include <stdio.h>
/**
 * main - entery point
 * @argc: size
 * @argv: values
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
