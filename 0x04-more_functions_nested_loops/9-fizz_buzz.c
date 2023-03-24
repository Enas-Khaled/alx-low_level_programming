#include "main.h"
#include <stdio.h>
/**
 * main - Entery point
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("%s", "Fizz");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("%s", "Buzz");
		else if ((i % 5 == 0) && (i % 3 == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%i", i);

		if (i != 100)
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);
}
