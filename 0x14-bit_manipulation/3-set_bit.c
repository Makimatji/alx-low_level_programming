#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at an index
 * @n: decimal number passed by pointer
 * @index: starting from 0, index position to change
 * Return: 1 if  worked, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (index > 64)
		return (-1);

	for (t = 1; index > 0; index--, t *= 2)
		;
	*n += t;

	return (1);
}
