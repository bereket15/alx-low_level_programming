#include "main.h"
#include <stdio.h>

/**
 * _strlen - function
 * Description: Legth of a string input
 * @s: Character string input
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
