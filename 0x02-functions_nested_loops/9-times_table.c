#include "main.h"

/**
 * times_table - prints the multiplication table of upto 9
 * Return: 0
 */
void times_table(void)
{
	int a, b, xy;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			xy = a * b;
			_putchar(44);
			_putchar(32);
			if (xy <= 9)
			{
				_putchar(32);
				_putchar(xy + 48);
			}
			else
				
