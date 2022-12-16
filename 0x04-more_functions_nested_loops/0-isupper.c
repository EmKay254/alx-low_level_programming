#include "main.h"

/**
 * _isupper - checks to see if integer is uppercase
 * @c: integer to be passed
 * Return: 0
 */
int _isupper(int c)
{
	char upper

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
