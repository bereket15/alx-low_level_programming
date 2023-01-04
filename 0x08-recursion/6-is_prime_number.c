#include "main.h"

int _prime(int num, int i);

/**
 * is_prime_number - function
 * Description: checks if a number is prime or not
 * @n: number to check
 * Return: 1 if number is prime or 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (_prime(n, i));
}

/**
 * _prime - function
 * Desription: Checks if a number is prime or not
 * @num: number to be checked
 * @i: checker number
 * Return: 1 if number is prime else return 0
 */
int _prime(int num, int i)
{
	if (num % i == 0)
		return (0);
	if (i == num / 2)
		return (1);
	return (_prime(num, i + 1));
}
