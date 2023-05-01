#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @idx: index
 * @n: value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL || *head == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head != NULL)
	{
		if (count == idx)
		{
			temp = *head;
			*head = new;
			(*head)->next = temp;
			return (*head);
		}
		count++;
		*head = (*head)->next;
	}
	return (NULL);
}
