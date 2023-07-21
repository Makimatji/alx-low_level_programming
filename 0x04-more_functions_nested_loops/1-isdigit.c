#include "main.h"

/**
 * _isdigit - check is numbers are 0 - 9
 * @c: check char
 *
 * Return: 0 0r 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
