#include "main.h"

/**
 * _print_reverse - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int _print_reverse(va_list l, flags_t *f)
{
	register short len = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";
	while (s[len])
		++len;
	j = len - 1;
	while (j >= 0)
		_putchar(s[j--]);
	return (len);
}