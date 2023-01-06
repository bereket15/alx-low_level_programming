#include "main.h"

/**
 * _islower - function
 * Description: Checks whether a character is lowercase or not
 * @c: is the passed value of the character to check
 * Return: 1 - success 0 - not success
 */
int _islower(int c)
{
	char ch = c;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
