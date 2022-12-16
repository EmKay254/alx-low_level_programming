#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @a: - integer to compute absolute value
 * Return: Return 0
 */
int _abs(int a)
{
	int i = a;
	int abs;

	if (i < 0)
	{
		i = i * (-1);
	}
	abs = i;
	return (abs);
}
