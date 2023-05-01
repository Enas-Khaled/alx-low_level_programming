#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position in a linked
 *                           list
 * @head: a pointer to the pointer to the head node of the linked list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *previous_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	previous_node = NULL;
	current_node = *head;

	for (i = 0; i < index && current_node != NULL; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}

