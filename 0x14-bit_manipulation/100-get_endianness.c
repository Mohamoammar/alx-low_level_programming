#include "main.h"

/**
 * get_endianness - checks if A machine Is little or big endian
 * Return: 0 For big, 1 For Little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *d = (char *) &i;

	return (*d);
}

