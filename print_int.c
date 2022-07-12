#include "main.h"

/**
 * print_intg - prints an integer
 * @arg: argument taken
 *
 * Return: an integer
 */

int print_intg(va_list, arg)
{
	unsigned int div = 1, i, resp, charPrnt = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		charprnt++;
		n *= -1;
	}
	for (i = 0; n / div > 9; i++, div *=10)
	;

	for (; div >= 1; n %= div; div /= 10, charPrnt++)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
	return (charPrnt);
}
