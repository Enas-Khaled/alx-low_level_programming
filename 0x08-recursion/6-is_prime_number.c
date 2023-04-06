#include "main.h"
/**
 * is_prime_helper - (int n, int i)
 * @n: num to check
 * @i: iterator
 * Return: int
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - check if n is prime(int n);
 * @n: num to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
