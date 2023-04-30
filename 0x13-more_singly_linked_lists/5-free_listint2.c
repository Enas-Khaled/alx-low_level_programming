#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: double pointer to the head of the list
 *
 * Description: This function frees all the nodes in a linked list of integers
 * pointed to by `head`, and sets `head` to NULL.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}

