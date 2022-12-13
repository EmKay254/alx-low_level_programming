#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/**
 * main-main entry point
 * This program will assign a random number and print the last digit of the number stored in the variable n
 * return: 0
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, ldigit);
	}	
	return (0);
}
