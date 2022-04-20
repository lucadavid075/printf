#include "main.h"

/**
 * _print_percent - Prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int _print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
