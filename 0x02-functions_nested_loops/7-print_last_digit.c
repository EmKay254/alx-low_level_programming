#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: number to print last digit
 * Return: the last digit of the number
 */
int print_last_digit(int a)
{
	int ldigit;

	ldigit = a % 10;
	if (ldigit < 0)
	{
		ldigit = ldigit * -1;
	}
	_putchar(ldigit + '0');
	return (ldigit);
}
