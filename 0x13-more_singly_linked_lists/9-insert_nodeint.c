#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @idx: index
 * @n: value
 * @head: pointer to head
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *temp, prev = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (count == idx)
		{
			prev_node->next = new;
			new->next = temp;
			return (new);
		}

		count++;
		prev_node = temp;
		temp = temp->next;
	}

	free(new_node);
	return (NULL);
}
