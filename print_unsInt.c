#include "main.h"

/**
 * print_unsInt - print unsigned integers
 * @arg: argumented passed
 * Return: len
 */

int print_unsInt(va_list arg)
{
	unsigned int n;
	int div = 1;
	int len = 0;
	n = va_arg(arg, unsigned int);

	while (n / div > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		len = len + _putchar(n / div + '0');
		n = n % div;
		div = div / 10;
	}
	return (len);

}
