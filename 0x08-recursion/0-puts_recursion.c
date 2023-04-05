#include "main.h"
/**
 * _puts_recursion - print string (char *s);
 * @s: the string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
