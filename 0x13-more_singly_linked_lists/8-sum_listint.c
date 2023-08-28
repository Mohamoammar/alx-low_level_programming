#include "lists.h"

/**
 * sum_listint - calculates The Sum Of All the data in a listint_t list
 * @head: First Node In The linked list
 *
 * Return: Resulting Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}


