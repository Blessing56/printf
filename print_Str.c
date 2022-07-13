#include "main.h"
#include <stdlib.h>


/**
 * print_unsignedIntToHex - prints unsigned int to hexadecimal.
 * @num: number to print
 * @_case: letter `a` on the case to print it (upper or lower)
 * Return: number or char printed
 */

int print_unsignedIntToHex(unsigned int num, char _case)
{
	unsigned int num2;
	int i, j, remainder, nbrCharacters = 0;
	char *numhex;

	for (num2 = num; num2 != 0; nbrCharacters++, num2 /= 16)
	;

	numhex = malloc(nbrCharacters);
	for (i = 0; num != 0; i++)
	{
		remainder = num % 16;
		if (remainder < 10)
			numhex[i] = remainder + '0';
		else
			numhex[i] = remainder - 10 + _case;
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(numhex[j]);
	free(numhex);
	return (nbrCharacters);
}


/**    
 * print_Str - prints a string
 * @arg: argument passed
 * Return: a string
 */    

int print_Str(va_list arg)
{
	int i;
	char *ptr;

	ptr = va_arg(arg, char *);

	if (ptr == NULL)
		ptr = "(null)";
	else if (*ptr == '\0')
	{
		return (-1);
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		if ((ptr[i] < 32 && ptr[i] > 0) || ptr[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');

			print_unsignedIntToHex(ptr[i], 'A');
		}
		else
			_putchar(ptr[i]);
	}

	return (i);
}

