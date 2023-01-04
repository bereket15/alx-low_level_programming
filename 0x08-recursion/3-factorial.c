#include "main.h"

/**
 * factorial - function
 * Discrption: return the factorial on number n
 * @n: the calue to be factorialed
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
