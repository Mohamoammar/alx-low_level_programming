#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @l: number To Print In binary
 */
void print_binary(unsigned long int l)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = l >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

