#include "main.h"

/**
 * _isupper - checks to see if integer is uppercase
 * @c: integer to be passed
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
