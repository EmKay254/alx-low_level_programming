#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @src: string to concatenate
 * @dest: string to concatenate
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + i] = *src;
		src++;
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}
