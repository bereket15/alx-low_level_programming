#include "main.h"
/**
 * print_rev - function
 * Discription: to print the  revers of a string
 * @s: a string to revers
 * Return: noting to return
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	for (j = i - 1 ; j >= 0 ; j--)
		_putchar(*(str + j));
	_putchar('\n');
}
