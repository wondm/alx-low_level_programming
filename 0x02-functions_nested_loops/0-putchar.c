#include "main.h"

/**
 * main - Prints the _putchar followde by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
