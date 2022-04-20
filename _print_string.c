#include "main.h"

/**
 * _print_string - function that prints a string
 * @l: the string
 *
 * Return: 1
 */

int _print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

