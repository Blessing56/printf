#include "main.h"
#include <stdlib.h>

/**
 * print_unsint2oct - function that prints octal numbers
 * @arg: argument passed
 * Return: returns count
 */
int print_unsint2oct(va_list arg)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);

	return (count);
}
