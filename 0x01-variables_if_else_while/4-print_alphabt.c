#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: 0 success
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		if ((c == 'e') || (c == 'q'))
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

