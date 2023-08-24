#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @str: new string to add in the node
 * @head: double pointer to the list_t list
 *
 * Return: the address of the new element, or NULL if it fails
 */
lst_t *add_node(lst_t **head, const char *str)
{
	list_t *New;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!New)
		return (NULL);

	new->str = strdup(str);
	new->Len = Len;
	new->next = (*Head);
	(*Head) = new;

	return (*Head);
}









