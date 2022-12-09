#include <stdio.h>
/**
 * main - Entry
 * Return: Alwayes 0
 */
int main(void)
{
	char al = 'a';
	char alu = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	while (alu <= 'Z')
	{
		putchar(alu);
		alu++;
	}
	putchar('\n');
	return (0);
}

