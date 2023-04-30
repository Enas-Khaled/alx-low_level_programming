#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 *
 * @head: A double pointer to the head of the listint_t list
 *
 * Return: The head node's data (n), or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
