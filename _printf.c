#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_id - prints special characters
 * @next: character after the %
 * @arg: argument for the identifier
 * Return: the number of char printed
 */
int print_id(char next, va_list arg)
{
	int i;

	identifierStruct functs[] = {
		{"c", print_char},
		{"s", print_stg},
		{"d", print_intg},
		{"i", print_intg},
		{"b", print_unsint2bin},
		{"u", print_unsInt},
		{"o", print_unsint2oct},
		{"x", print_hexLow},
		{"X", print_hexUpp},
		{"S", print_Str},
		{"p", print_ptr},
		{"r", print_str_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

	for (i = 0; functs[i].identifier != NULL; i++)
	{
		if (functs[i].identifier[0] == next)
			return (functs[i].printer(arg));
	}
	return (0);
}


/**
 * _printf - function that displays input on standard output
 * @format: character string
 * Return: the number of character
 *
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int id = 0, charp = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charp++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charp++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		id = print_id(format[i + 1], arg);
		if (id == -1 || id != 0)
			i++;
		if (id > 0)
			charp = charp + id;
		if (id == 0)
		{
			_putchar('%');
			charp++;
		}
	}
	va_end(arg);
	return (charp);
}

