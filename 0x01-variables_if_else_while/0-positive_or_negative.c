#include <stdlib>
#include <time.h>
#include <stdio>

/**
 * main- Entry here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n == 0)

{

	printf("%i is zero\n", n);

}
	else if (n < 0)

{

	printf("%i is negative\n", n);

}
	else

{
	printf("%i is positive\n", n);

}

	return (0);
}