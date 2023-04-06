#include "main.h"
/**
 * check - check
 * @s: string to check in
 * @start: start
 * @end: end
 * Return: 0 or 1
 */
int check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check(s, start + 1, end - 1));
}
/**
 * is_palindrome - check(char *s);
 * @s: string to check
 * Return: 0 or 1;
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check(s, 0, len - 1));
}
