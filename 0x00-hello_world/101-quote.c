#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful", 31);
	write(STDOUT_FILENO, "\" - Dora Korapar, 2015-10-19\v", 31);
	return (1);
}
