#include "main.h"
/**
 * _isalpha - Function
 * Description: Checks whether a character isalphabet or not
 * @c: is the passed value of the character to check
 * Return: 1 - success 0 - not success
 */
int _isalpha(int c)
{
	char ch = c;

	if (ch >= 'A' && ch <= 'z')
		return (1);
	else
		return (0);
}
