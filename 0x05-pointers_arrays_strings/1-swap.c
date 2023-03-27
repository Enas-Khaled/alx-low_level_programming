#include "main.h"

/**
 * swap_int - void swap_int(int *a, int *b);
 * @a: integer
 * @b: integer
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
