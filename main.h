#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
/*FLAG*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HARSH 8
#define F_SPACE 16

/*SIZES*/
#define S_LONG 2
#define S_SHORT 1

/**
 * struct format - structures
 * @fmt: format
 * @fn: function associated
 */
struct fmt
{
	char fmt;

	int (*fn)(va_list, char[], int, int, int, int);
}

/**
 * typedef structure fmt fmt_t
 * @fmt: format
 * @fm_t: function associated
 */
typedef structure fmt fmt_t;

int _printf(const char *format, ...);
int handles(const char *fmt, int *i, va_list list, char buffer[], 
		int flags, int width, int precision, int size);


/*ALL FUNCTION*/
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);


int print_int(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags,
		int width, int precison, int size);
int print_hexadecimal(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags,
		int width, int precision, int size);


int print_hexa(va_list types, char map_to[], char buffer[],
		int flags, char flag_ch, int width, int precision, int size);

int print_non_printable(va_list types, char buffer[], int flags,
		int width, int precision, int size);

int print_pointer(va_list types, char buffer[], int flags,
		int width, int precision, int size);


int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);


int print_reverse(va_list types, char buffer[], int flags,
		int width, int precision, int size);

int print_rot13string(va_list types, char buffer[], int flag,
		int width, int precision, int size);


int handle_write_char(char c, char buffer[], int flags,
		int width, int precision, int size);
int write_number(int is_postitive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
		int length, char padd, int extra_c);
int write_pointer(char buffer[], int ind, int length, int width,
		int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif