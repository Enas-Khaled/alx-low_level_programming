#include <stdio.h>
#include "main.h"
/**
 * main - entery point
 * Return:void
 */
int main(void)
{
	int first = 1, second = 2, next, sum = 2;

	while (second <= 4000000)
	{
		next = first + second;
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}
