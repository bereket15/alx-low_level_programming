#include "main.h"
/**
 * _isupper - function
 * Description: Checks whether a character is uppercase or not
 * @c: is the passed value of the character to check
 * Return: 1 - success 0 - not success
 */
int _isupper(int c)
{
	char ch = c;

	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
