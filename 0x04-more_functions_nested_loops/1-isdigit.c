#include "main.h"

/**
 * _isdigit - checks if integer is a number
 * @c: integer to be passed
 * Return: Always 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
