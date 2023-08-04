#include "main.h"

/**
 * getting_endianness - checks whether a machine is little or big endia
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}