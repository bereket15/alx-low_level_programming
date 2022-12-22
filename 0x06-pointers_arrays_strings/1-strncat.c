#include "main.h"
#include <string.h>
/*
 * _strcat -> function to append a string
 * @dest: first param
 * @src: second param
 * @n: Third param
 * Return: a appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1, count2, x, full_size, tmp;

	count1 = 0;
	count2 = 0;

	while (*(dest + count1) != '\0')
		count1++;
	while (*(src + count2) != '\0')
		count2++;
	if (n < count2)
		tmp = n;
	else
		tmp = count2;
	full_size = count1 + tmp;
	for (x = 0 ; x < tmp ; x++)
	{
		*(dest + count1) = *(src + x);
		count1++;
	}
	if (n < count2)
		*(dest + full_size) = '\0';
	return (dest);
}
