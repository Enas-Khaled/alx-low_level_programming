#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * main - entery point
 *
 * Return: 0 success
 */
int main(void)
{
	char putC[] = "_putchar";
	int i = 0;

	while (putC[i] != '\0')
	{
		_putchar(putC[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

