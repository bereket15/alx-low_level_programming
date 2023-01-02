#include "main.h"

/**
 * set_string - function
 * Description: Set the value of a pointer to a pointer variable
 * @s: an address of a pointer which points to a string character
 * @to: a string to copy
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
