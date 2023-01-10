#include "main.h"
#include <stdio.h>
/**
 * 0-create_array.c - function
 * @c: first parameter
 * @size: size of arry to be created
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
