#include "main.h"

/**
 * print_sign - tests print_sign function
 * Description: A function that prints the sign of a number
 * @n: variable to be passed
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(0);
	}
	return (0);
}
