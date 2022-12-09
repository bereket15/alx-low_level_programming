#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	char b16;

	for (n = 0 ; n <= 9 ; n++)
		putchar((n % 10) + '0');
	for (b16 = 'a' ; b16 <= 'f' ; b16++)
	{
		putchar(b16);
	}
	putchar('\n');
	return (0);
}
