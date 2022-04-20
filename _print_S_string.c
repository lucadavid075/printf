#include "main.h"
#include <stdarg.h>

/**
 * print_S_string - prints a string using _putchar, modified for S chars
 * @args: ptr to the va_list we are moving through
 * Return: strlen
 */
int print_S_string(va_list ap)
{
	unsigned int count = 0, i = 0;
	char *s;
	char *convert = "0123456789ABCDEF";

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(NULL)";
	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] > 126)
		{
			count = count + 4;
			_putchar(92);
			_putchar('x');
			if (s[i] < 16)
			{
				_putchar('0');
				_putchar(convert[s[i] + 0]);
			}
			else if (s[i] > 126)
			{
				_putchar('7');
				_putchar('F');
			}
			else
			{
				_putchar('1');
				s[i] = s[i] % 16;
				_putchar(convert[s[i] + '0']);
			}
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}
