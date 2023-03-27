#include "main.h"
#include <string.h>
/**
 * puts_half(char *str)- void _puts(char *str);
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, len2;
	int len = strlen(str);

	if (len % 2 == 0)
		len2 = len / 2;
	else
		len2 = (len + 1) / 2;

	for (i = len2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
