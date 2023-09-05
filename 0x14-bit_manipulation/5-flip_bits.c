#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @o: First number
 * @u: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int o, unsigned long int u)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = o ^ u;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}


