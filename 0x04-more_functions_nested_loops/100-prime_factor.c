#include <stdio.h>
#include <math.h>
/**
 * is_prime - check if the no. is prime
 * @n: int
 * Return: 0 Or 1
 */
int is_prime(long long int n)
{
	long long int i;

	if (n <= 0)
		return (0);
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - entery point
 * Return: 0
 */
int main(void)
{
	long long int n = 612852475143;
	long long int i, largest_prime = 0;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
				largest_prime = i;
			if (is_prime(n / i) && ((n / i) > largest_prime))
				largest_prime = n / i;
		}
	}
	printf("%lld\n", largest_prime);
	return (0);
}
