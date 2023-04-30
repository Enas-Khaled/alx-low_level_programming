#include "lists.h"
/**
 * listint_len - (const listint_t *h);
 * @h: head
 * Return: pointer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = malloc(sizeof(listint_t));

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
