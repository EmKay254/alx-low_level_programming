#include "main.h"

/**
 * _isalpha - test the _isalpha function
 *
 * @c: number to pass to _isalpha function
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
