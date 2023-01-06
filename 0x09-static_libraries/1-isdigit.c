#include "main.h"

/**
 * _isdigit - function
 * Description: Checks whether a character is digit or not
 * @c: is the passed value of the character to check
 * Return: 1 - success 0 - not success
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
