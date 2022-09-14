#include "main.h"
/**
 *print_sign - Prints the sign of a number
 *@n: n is an intiger
 *
 *Return: 1 for greater than zero, 0 for zero and -1 for less than zer
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
