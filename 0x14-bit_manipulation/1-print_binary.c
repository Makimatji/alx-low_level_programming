#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (p == 0)
	{
		printf("0");
		return;
	}

	for (temp = p, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
