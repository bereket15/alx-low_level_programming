#include "main.h"

/**
 * _memcpy - function
 * Description: copies n number of characters to dest
 * @dest: The destination address to copy the values
 * @src: The source address of the string to copy
 * @n: number of characters to replace
 * Return: the starting address of the string variable
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
