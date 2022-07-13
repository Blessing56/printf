#include "main.h"

/**
 * print_hex - converts a decimal to hex
 * @n: num to be converted
 * @alpha: char type A-F or a-f
 * @hex: base 16 being passed
 * Return: num of char
 */

int print_hex(unsigned int n, unsigned int hex, char alpha)
{
	unsigned int i = n % hex;
	unsigned int j = n / hex;
	char c;

	if (i > 10)
		c = (i - 10) + alpha;
	else
		c = i + '0';
	if (j == 0)
	{
		return (_putchar(c));
	}
	if (j < hex)
	{
		if (j > 10)
			return (_putchar(j - 10 + alpha) + _putchar(c));
		return (_putchar(j + '0') + _putchar(c));
	}
	return (print_hex(j, hex, alpha) + _putchar(c));
}



/**
 * print_hexLow - prints lower case hex
 * @arg: argument passed
 * Return: num of char printed
 */

int print_hexLow(va_list arg)
{
	return (print_hex(va_arg(arg, unsigned int), 16, 'a'));
}


/**
 * print_hexUpp - prints upper case hex
 * @arg: argument passed
 * Return: num of char printed
 */

int print_hexUpp(va_list arg)
{
	return (print_hex(va_arg(arg, unsigned int), 16, 'A'));
}

