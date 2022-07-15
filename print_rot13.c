#include "main.h"

/**
 * print_rot13 - function that rotate an alphabet by 13 letters
 * @arg: passed argument
 * Return: count of char
 */
int print_rot13(va_list rot)
{
	int a, count;
	char *s;

	a = count = 0;
	s = va_arg(rot, char *);

	if (s == NULL)
		return (-1);
	while (s[a] !='\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'z') || 
		(s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'n' && s[a] <= 'z') ||
			(s[a] >= 'N' && s[a] <= 'Z'))
				count = count + _putchar(s[a] - 13);
			else
				count = count + _putchar(s[a] + 13);
		}
		else
			count =  count + _putchar(s[a]);
		a++;
	}
	return (count);
}
