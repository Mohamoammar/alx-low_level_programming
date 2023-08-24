#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @o: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *o)
{
	size_t s = 0;

	while (o)
	{
		if (!o->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", o->len, o->str);
		o = o->next;
		s++;
	}

	return (s);
}


