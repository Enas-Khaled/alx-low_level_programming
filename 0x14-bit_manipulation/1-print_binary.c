#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the unsigned long int to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask)
	{
		if ((n & mask) || printed)
		{
			_putchar((n & mask) ? '1' : '0');
			printed = 1;
		}
		mask >>= 1;
	}
	if (!printed)
		_putchar('0');
}

