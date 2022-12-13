#include <stdio.h>

/**
 * main-main entry point
 * Return: success
 * This program prints all single digit numbers of base 10 starting from 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
