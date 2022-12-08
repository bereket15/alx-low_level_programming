#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: 0 Success
 *     */

int main(void)
		{
		char ch;
		int in;
		long int lin;
		long long int llin;
		float fl;

		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
                printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lin))
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llin));
                printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
		return (0);
		}
