#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z' && al != 'e' && al != 'q')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
