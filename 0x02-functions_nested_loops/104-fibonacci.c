#include <stdio.h>
#include "main.h"
/**
 * main - entery point
 * Return: void
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int i;

	printf("%d, %d, ", fib1, fib2);
	for (i = 0; i < 96; i++)
	{
		int fib_next = fib1 + fib2;

		printf("%d, ", fib_next);
		fib1 = fib2;
		fib2 = fib_next;
	}
	printf("\n");
	return (0);
}

