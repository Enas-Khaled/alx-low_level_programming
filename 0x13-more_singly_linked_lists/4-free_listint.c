#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
