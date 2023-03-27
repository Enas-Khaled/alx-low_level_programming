#include "main.h"
/**
 * print_rev - void print_rev(char *s);
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i, j = 0;

	while (s[j] != '\0')
		j++;
	for (i = j; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
