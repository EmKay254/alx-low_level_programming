#include <stdio.h>

/**
 * main-main entry point
 * Return: 0
 * This program prints the alphabet in lowercase except the letters q and e
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
