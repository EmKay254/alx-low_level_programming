#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string to copy
 * @dest: string to be copied
 * @n: integer
 * Return: Always success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
