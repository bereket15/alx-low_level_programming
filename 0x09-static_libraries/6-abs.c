#include "main.h"
/**
 * _abs - function
 * Description: Absolute value of a given number
 * @r: is the passed value of the number to check
 * Return: Absolute value of a number
 */
int _abs(int r)
{
	int num = r;

	if (num < 0)
		num = -num;

	return (num);
}
