#include  <stdio.h>

/**
 * main - Entery point
 *
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

