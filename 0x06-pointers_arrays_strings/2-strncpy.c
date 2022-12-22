#include "main.h"
/**
 * _strncpy - function
 * Description function that copies a string
 * @dest: first parme
 * @src: second parame
 * @n: third parame
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n);
{
	int len = 0, i = 0;

	while (dest[len])
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
