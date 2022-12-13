#include "main.h"
/**
 * _abs - Function
 * Description: Absolute value of a number
 * @r: is the given value of the number to chack
 * Return: Absolute value of a number
 */
int _abs(int r)
{
	int num = r;

	if (num < 0)
		num = -num;
	return (num);
}
