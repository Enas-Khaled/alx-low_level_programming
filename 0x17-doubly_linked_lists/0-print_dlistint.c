#include "lists.h"
/**
 * print_dlistint - (const dlistint_t *h)
 * @h: ptr to head
 * Return: nuns of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return count;
}
