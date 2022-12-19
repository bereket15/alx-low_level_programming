#include "main.h"
/**
 * rev_string - function
 * Discription - revers a given string
 * @s: a string to be reversed
 * Return: return noting
 */
void rev_string(char *s)
{
	int i, j, c;
	char tmp;

	c = 0;
	while (*(s + c) != '\0')
		c++;
	j = c / 2;
	c -= 1;
	for (i = 0 ; i < j ; i++)
	{
		tmp = *(s + (c - i));
		*(s + (c - i)) = *(s + i);
		*(s + i) = tmp;
	}
}
