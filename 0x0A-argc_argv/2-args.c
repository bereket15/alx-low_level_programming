#include <stdio.h>

/**
 * main - ths is a function
 * @argc: argc parameter
 * @argv: an array
 * Return: 0 for correct output
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
