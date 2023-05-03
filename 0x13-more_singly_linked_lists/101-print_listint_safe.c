#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 *         If the function fails, exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
        size_t count = 0;
        const listint_t *slow = head, *fast = head;

        while (slow != NULL && fast != NULL && fast->next != NULL)
        {
                slow = slow->next;
                fast = fast->next->next;

                if (slow == fast)
                {
                        printf("-> [%p] %d\n", (void *) slow, slow->n);
                        exit(98);
                }

                printf("[%p] %d\n", (void *) slow, slow->n);
                count++;
        }

        return (count);
}

