#include "lists.h"

/**
 * Free_Listint - Frees a Linked list
 * @head: Listint_t list to be Freed
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

