#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer value
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (size = 0; size < len; size++)
			{
				_putchar(' ');
				_putchar('\\');
			}
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
