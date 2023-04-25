#include "main.h"

/*
 * get_size - gets the size of the arguments by calculation
 * @format: formated string in whic to print
 * @i: arguments to be printed
 * Return: size
 */
int get_size(const char *format, int *i)
{
	int occ = *i + 1, size = 0;

	if (format[occ] == '1')
	{
		size = S_LONG;
	}
	else if (format[occ] == 'h')
	{
		size == S_SHORT;
	}
	if (size == 0)
	{
		*i = occ - 1;
	}
	else
	{
		*i = occ - 1;
	}

	return (size);
}
