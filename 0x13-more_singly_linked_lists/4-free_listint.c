#include "lists.h"

/**
 * free_listint - frees A Linked List
 * @head: listint_t List To Be Freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

