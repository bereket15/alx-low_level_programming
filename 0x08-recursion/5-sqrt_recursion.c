#include "main.h"

/**
 * _sqrt_recursion - function
 * Description: finds the natural square root of a number
 * @n: number to square root
 * Return: value of square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt(1, n));
}
