#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare with
 * Return: always success
 */

int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
	{
		cmp = *s1 - *s2;
	}
	return (cmp);
}
