#include "main.h"

/**
 * _strcpy - function
 * Description: Copy string value of one variable to another variable
 * @dest: target to paste the copies of source string value
 * @src: source of the string value to be copied
 * Return: pointer value of the destination array
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;
	int i, j;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	for (j = 0 ; j <= i ; j++)
		*dest++ = *src++;
	return (tmp);
}
