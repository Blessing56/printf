#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print char
 * @c: char being passed
 * Return: returning char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
