#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>


/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* _printf prototype */
int _printf(const char *format, ...);

/* write out functions */
int _putchar(char c);
int _puts(char *str);

int count_digit(int i);
void print_number(int n);
int print_bigS(va_list l, flags_t *f);

/*prototype for all format specifiers */
int _print_char(va_list l, flags_t *f);
int _print_string(va_list l, flags_t *f);
int _print_percent(va_list l, flags_t *f);
int _print_int(va_list l, flags_t *f);
int _print_reverse(va_list l, flags_t *f);
int _print_rot13(va_list l, flags_t *f);
int _print_unsigned(va_list l, flags_t *f);
int _print_octal(va_list l, flags_t *f);
int _print_binary(va_list l, flags_t *f);
int _print_hex_l(va_list l, flags_t *f);
int _print_hex_u(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

int _print_address(va_list l, flags_t *f);

/* converter prototypes */
char *convert(unsigned long int num, int base, int lowercase);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

#endif /* _MAIN_H_ */
