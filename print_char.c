#include "main.h"

/**
 * print_char - function that prints character
 * @arg: the parameter passed
 * Return: returns an integer
 */
int print_char(va_list arg)
{
	char c;

	c = (char) va_arg(arg, int);
	return (_putchar(c));
}
