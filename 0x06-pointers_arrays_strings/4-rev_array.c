#include "main.h"
/**
 * reverse_array - function
 * Description: reverse array
 * @a: first parame
 * @n: second parm
 * Return: noting
 */
void reverse_array(int *a, int n);
{
	int len = 0, lenn = 0, i;

	while (a[len])
		len++;
	for (i = len ; len > 0 ; len--)
	{
		a[lenn] = a[len];
		lenn++;
	}
}
