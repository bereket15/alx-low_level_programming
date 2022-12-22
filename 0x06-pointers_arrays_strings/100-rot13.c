#include "main.h"

/**
 * rot13 - function
 * Description: encode a string with rot13 /Rotate 13/ encoding
 * @s: String value passed
 * Return: decoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alpha[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
			'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
			'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
			'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};
	char r13[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
			'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'n', 'o', 'p', 'q', 'r', 's',
			't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
			'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm'};
	while (s[i])
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
