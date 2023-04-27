#include "lists.h"
#include "lists.h"
/**
 * _strlen - count len
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - (const list_t *h);
 * @h: list
 * Return: print list
 */
size_t print_list(const list_t *h)
{
	size_t L;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		L++;
	}
	return (L);
}
