#include <string.h>
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
	strncpy(dest, src, n);
	return (dest);
}
