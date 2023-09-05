#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @f: string Containing the binary number
 *
 * Return: The Converted number
 */
unsigned int binary_to_uint(const char *f)
{
	int i;
	unsigned int dec_val = 0;

	if (!f)
		return (0);

	for (i = 0; f[i]; i++)
	{
		if (f[i] < '0' || f[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (f[i] - '0');
	}

	return (dec_val);
}

