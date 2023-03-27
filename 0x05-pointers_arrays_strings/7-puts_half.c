#include "main.h"
#include <string.h>OB
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
		len2 = (len - 1) / 2;

	for (i = 0; str[i] != '\0'; i++)
		if ((i >= len2)
			_putchar(str[i]);
	_putchar('\n');
}
