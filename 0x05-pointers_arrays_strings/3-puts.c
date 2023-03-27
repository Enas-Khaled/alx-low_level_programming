#include "main.h"
/**
 * _puts(char *str)- void _puts(char *str);
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
