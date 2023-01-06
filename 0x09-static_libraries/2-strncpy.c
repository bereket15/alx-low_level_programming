#include "main.h"

/**
 * _strncpy - function
 * Description: copy string
 * @dest: pointer to the first string value
 * @src: pointer to the second string value
 * @n: number of bytes to be copied
 * Return: pointer value of the copied strings
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
