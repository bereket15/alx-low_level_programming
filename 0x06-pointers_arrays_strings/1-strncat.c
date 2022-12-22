#inclued "main.h"
#include <string.h>
/*
 * _strcat -> function to append a string
 * @dest: first param
 * @src: second param
 * @n: Third param
 * Return: a appended string
 */
char *_strncat(char *dest, char *src, int n);
{
	strncat(dest, src, n);
	return (dest);
}
