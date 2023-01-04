#include "main.h"

/**
 * _pow_recursion - function
 * Description: prints x the power of y
 * @x: number to be powered
 * @y: number to be the power of
 * Return: value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
