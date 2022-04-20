#include "main.h"

/**
 * _print_char - writes the character c to stdout
 * @l: The character to print
 *
 * Return: 1
 */

int _print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
