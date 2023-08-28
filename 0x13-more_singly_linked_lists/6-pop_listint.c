#include "lists.h"

/**
 * pop_listint - Deletes The head Node of a Linked list
 * @head: Pointer to The first Element In the Linked list
 *
 * Return: The data Inside the Elements that was deleted,
 * or 0 if The List is Empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

