#include "main.h"

int _sqrt(int num, int root);

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

/**
 * _sqrt - function
 * Desription: Calculates the square root of a number
 * @num: number to be calculated
 * @root: checker number
 * Return: value of square root
 */
int _sqrt(int num, int root)
{
	if (num > root)
		return (-1);
	if (num * num == root)
		return (num);
	return (_sqrt(num + 1, root));
}
