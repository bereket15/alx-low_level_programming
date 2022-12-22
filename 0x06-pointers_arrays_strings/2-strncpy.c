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
char *_strncpy(char *dest, char *src, int n)
{
	int count2, x;

	count2 = 0;
	x = 0;
	while (*(src + x) != '\0')
	{
		count2++;
		x++;
	}
	for (x = 0 ; *(src + x) && x < n ; x++)
		*(dest + x) = *(src + x);
	for (x = count2 ; x < n ; x++)
		*(dest + x) = '\0';
	return (dest);
}
