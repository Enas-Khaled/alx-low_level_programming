#include "lists.h"

/**
 * dlistint_len - (const dlistint_t *h)
 * @h: ptr to the head
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
