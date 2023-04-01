#include "main.h"
/**
 * *infinite_add - (char *n1, char *n2, char *r, int size_r)
 * @n1: first string
 * @n2: second string
 * @r: result
 * @size_r: buffer size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 >= size_r)
		return (0);

	int carry = 0, sum = 0, i = len1 - 1, j = len2 - 1;
	char *p = r + size_r - 1;

	*p = '\0';
	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = curry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (y >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		*--p = (sum % 10) + '0';
	}
	return (p);
}
