#include "main.h"
/**
 * is_sqr_helper - check sqr
 * @n: num to check
 * @i: iterator
 * Return: int
 */
int is_sqr_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (is_sqr_helper(n, i + 1);
	else
		return (-1);
}
/**
 * _sqrt_recursion - check sqr (int n)
 * @n: num to check
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (is_sqr_helper(n, 1));
}
