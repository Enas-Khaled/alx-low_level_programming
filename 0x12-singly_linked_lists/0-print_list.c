#include "lists.h"
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
