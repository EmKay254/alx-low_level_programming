#include "main.h"

/**
 * string_toupper - changes all lowecase letters to uppercase
 * @n: string
 * Return: always success
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
