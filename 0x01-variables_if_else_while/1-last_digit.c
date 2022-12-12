#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;

	if (n % 10 > 5)
	{

	printf("Last digit of %i is %i and is greater than 5\n", n, LD);

	}
	else if (n % 10 == 0)
	{

	printf("Last digit of %i is %i and is 0\n", n, LD);

	}
	else
	{

	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LD);

	}

	return (0);

}
