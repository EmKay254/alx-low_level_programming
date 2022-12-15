#include "main.h"

/**
 * _isalpha - test the _isalpha function
 *
 * @c: number to pass to _isalpha function
 */
int _isalpha(int c)
{
	int i = 'a';

	for (i = 'a'; i = 'z'; i++)
	{
	if (c != i)
	{
	return (0);
	}
	}
	return (1);
}
