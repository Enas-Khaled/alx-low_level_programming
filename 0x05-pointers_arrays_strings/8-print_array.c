#include "main.h"
/**
 * print_array - void print_array(int *a, int n)
 * @a: array
 * @n: length
 * Return: nothing
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]); // print current element

		if (i != n - 1)
			printf(", "); // print comma and space if not last element
	}
	printf("\n"); // print newline character
}
