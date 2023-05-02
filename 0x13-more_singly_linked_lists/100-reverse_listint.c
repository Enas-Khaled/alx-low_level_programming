#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to head of the linked list
 *
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t prev = NULL, next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
