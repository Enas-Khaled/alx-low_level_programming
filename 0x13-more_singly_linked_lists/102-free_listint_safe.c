#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (count);

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = NULL;
			count++;
			break;
		}

		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}

	*h = NULL;

	return (count);
}

