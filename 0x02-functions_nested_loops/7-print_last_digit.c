#include "main.h"
/**
 * print_last_digit - Function
 * Discription: print last digir of a number
 * @r: data type of the number to be printed
 * Return: laste digit
 */
int print_last_digit(int r)
{
	int r, l;

	l = r % 10;
	_putchar(l);
	return (l);
