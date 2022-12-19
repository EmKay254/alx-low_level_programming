#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: Always success
 */

void print_rev(char *s)
{
	int i = 0;
	int _len;

	for (_len = 0; s[_len] != '\0'; _len++)
	{
	}

	for (i = _len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
