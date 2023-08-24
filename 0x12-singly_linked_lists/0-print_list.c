
#include "lists.h"

/**
 * print_lst - prints all the elemns of the  linked lst
 * @o: pointer to the list_t list >  print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *o)
{
        size_t g = 0;

        while (o)
        {
                if (!o->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", o->len, o->str);
                o = o->next;
                g++;
        }

        return (g);
}
