#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string contain the binary num
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[i] - '0');
	}

	return (deci_val);
}
