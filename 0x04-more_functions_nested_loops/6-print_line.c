#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: integer value
 * Return: Always success
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
