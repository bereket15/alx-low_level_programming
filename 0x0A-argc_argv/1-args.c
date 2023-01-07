#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an arry
 * Return: 0 for correct output
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	print("%d\n", argc - 1);
	return (0);
}
