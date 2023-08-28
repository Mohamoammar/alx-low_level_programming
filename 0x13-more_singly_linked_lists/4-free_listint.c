#include "lists.h"

/**
 * free_Listint - Frees a Linked List
 * @head: Listint_t List To Be Freed
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

