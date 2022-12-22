#include "main.h"

/**
 * _strcmp - function
 * Description: compare two strings
 * @s1: pointer to the first string value
 * @s2: pointer to the second string value
 * Return: pointer value of the copied strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
