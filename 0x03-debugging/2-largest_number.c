#include "main.h"
/**
 *  largest_number - returns the largest number
 *  Description: check the largest of 3 numbers
 *  @a: first intege
 *  @b: second integer
 *  @c: third integer
 *  Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;


	if (a >= b)
	{
		if (a >= c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b >= c)
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
