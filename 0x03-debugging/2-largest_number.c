#include "main.h"

/**
 * largest_number -returns the largest of 3 nymbers
 * @a: first integer
 * @b: seconf integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if(b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
