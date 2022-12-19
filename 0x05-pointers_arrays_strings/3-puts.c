#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string then followed by a new line
 *
 * @str: string to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
