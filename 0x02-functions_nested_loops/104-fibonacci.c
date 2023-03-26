#include <stdio.h>
#include "main.h"
/**
 * main - entery point
 * Return: 0 success
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next, i;

	printf("%lu, %lu, ", first, second);
	for (i = 2; i < 98; i++)
	{
		next = first + second;
		if (next < 0)
			continue;
		printf("%lu", next);
		if (i < 97)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
