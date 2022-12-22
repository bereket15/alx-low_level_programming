#include "main.h"
/**
 * infinite_add - function
 * Description: Adds two numbers using buffer size
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 * Return: If r can store the sum - a pointer to the result, else - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, count1 = 0, count2 = 0;
	
	for (i = 0; *(n1 + i); i++)
		count1++;
	for (i = 0; *(n2 + i); i++)
		count2++;
	if (size_r <= count1 + 1 || size_r <= count2 + 1)
		return (0);
	n1 += count1 - 1;
	n2 += count2 - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}
