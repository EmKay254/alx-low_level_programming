#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3)
		{
			printf("Fizz ");
		}
		else if (num % 5)
		{
			printf("Buzz ");
		}
		else if ((num % 3) && (num % 5))
		{
			printf("FizzBuzz ")
		else
		{
			printf("%d ", num);
		}
	}
	return (0);
}
