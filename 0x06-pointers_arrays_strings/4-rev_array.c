#include "main.h"

/**
 * reverse_array- reverses the content of array of integers
 * @a: pointer to int array
 * @i: is the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int i)

{
	int temp, s, x;

	s = 0;
	x = i - 1;
	while (s < x)
	{
		temp = a[s];
		a[s] = a[x];
		a[x] = temp;
		s++;
		x--;
	}
}
