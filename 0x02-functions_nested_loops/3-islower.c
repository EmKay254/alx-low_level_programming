#include "main.h"

/**
 * _islower - entry point to the program
 * @c: the int value it receives
 * Description: A function that checks for lowercase character
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
