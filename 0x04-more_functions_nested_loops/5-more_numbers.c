#include "main.h"

/**
 * more_numbers - prints 10 times numbers to 14
 * Return: Always success
 */

void more_numbers(void)
{
	int ntime, num;

	for (ntime = 0; ntime < 10; ntime++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchat(10);
	}
}
