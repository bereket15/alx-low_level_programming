#include "main.h"

/**
 * _atoi - function
 * Description: Extract integer with the the value of preceeding sign
 * from string value
 * @s: pointer which points to a string value
 * Return: Extracted integer or 0 if there is no integer
 */
int _atoi(char *s)
{
	unsigned int num;
	int flag, neg_count;

	num = 0;
	flag = 0;
	neg_count = 0;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + *s - '0';
			flag = 1;
		}
		else
			if (flag == 1)
				break;
		if (*s == '-')
			neg_count++;
		s++;
	}
	if (flag == 1 && neg_count % 2 != 0)
		num *= -1;
	return (num);
}
