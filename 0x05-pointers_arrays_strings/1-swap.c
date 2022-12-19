#include "main.h"
/**
 * swap_int - function
 * Discription: swaping two intgers
 * @a: intger to be swaped
 * @b: intger to be swaped
 * Return: noting to return
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
