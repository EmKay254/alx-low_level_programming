#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int w, l;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < (size - 1); w++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}
	}
}
