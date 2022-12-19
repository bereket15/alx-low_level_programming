#include "main.h"
/**
 * _strlen - function
 * Discription: return the length of a string
 * @s: string holder
 * Return: return the length of string
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
