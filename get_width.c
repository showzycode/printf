#include "main.h"

/**
 * get_width - gets the width and print
 * @format: string in which to print the arguments
 * @i: args to be printed
 * @list: list of args
 *
 * Return: width
 */
int get_width(const char *format, int *i, va_list list)
{
	int occ, width = 0;

	for (occ = *i + 1; format[occ]!= '\0'; occ++)
	{
		if (is_digit(format[occ]))
		{
			width = width * 10;
			width += format[occ] - '0';
		}
		else if (format[occ] == '*')
		{
			occ++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = occ - 1;
	return (width);
}
