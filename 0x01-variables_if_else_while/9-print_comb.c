#include <stdio.h>

/**
 * main-main entry point
 * Return: success
 */
int main(void)
{
	char a = '0';

	for (a = 0; a <= 9; a++)
	{
		putchar("%d, ", a);
	}
	putchar('\n');
	return (0);
}
