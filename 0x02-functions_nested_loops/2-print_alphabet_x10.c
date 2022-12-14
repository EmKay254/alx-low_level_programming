#include "main.h"

/**
 * print_alphabet_x10 - program entry point
 *
 * Description: A program that prints 10 times the
 * alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}

		_putchar('\n');
		i++;
	}
}
