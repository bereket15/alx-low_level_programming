#include "main.h"

/**
 * leet - function
 * Description: encode string to 1337
 * @s: String value passed
 * Return: changed string
 */
char *leet(char *s)
{
	int i = 0, j;
	char lt[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0 ; j <= 7 ; j++)
		{
			if (s[i] == lt[j] || s[i] - 32 == lt[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
