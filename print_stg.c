#include "main.h"
#include "stdlib.h"

/**
 * print_stg - prints a string
 * @arg: argument passed
 * Return: returns the string
 */
int print_stg(va_list arg)
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
		_putchar(ptr[i]);
	}

	return (i);
}
