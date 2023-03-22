#include <stdio.h>
#include "main.h"
/**
 * main - entery point
 * Return: 0 success
 */
int main(void)
{
	int first = 1, second = 2, next, i;

	printf("%d, %d, ", first, second);
	for (i = 2; i < 50; i++)
	{
		next = first + second;
		if (next < 0)
			continue;
		printf("%d", next);
		if (i < 49)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
