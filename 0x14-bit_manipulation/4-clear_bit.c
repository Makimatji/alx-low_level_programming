#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position change
 * Return: 1 if it works, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (p = 1; hold > 0; p *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= p;

	return (1);
}
