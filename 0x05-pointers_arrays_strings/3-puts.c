#include "main.h"

/**
 * _puts - prints a string followed by a new line, to stdout
 * @str: Character of a pointer
 *
 *Return: return the string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
