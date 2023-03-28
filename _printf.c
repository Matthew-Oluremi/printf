#include "main.h"
#include <stdarg.h>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int n = 0, count = 0, nbuf = 0;
	va_list args;
	int (*func)(va_list, char *, unsigned int);
	char *buffer;

	va_start(args, format);
	buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[n] == '%' && !format[n + 1]))
		return (-1);
	if (!format[n])
		return (0);
	for (n = 0; format && format[n]; n++)
	{
		if (format[n] == '%')
		{
			if (format[n + 1] == '\0')
			{	print_buf(buffer, nbuf), free(buffer), va_end(args);
				return (-1);
			}
			else
			{	func = get_print_func(format, n + 1);
				if (func == NULL)
				{
					if (format[n + 1] == ' ' && !format[n + 2])
						return (-1);
					handl_buf(buffer, format[n], nbuf), count++, n--;
				}
				else
				{
					count += func(args, buffer, nbuf);
					n += ev_print_func(format, n + 1);
				}
			} n++;
		}
		else
			handl_buf(buffer, format[n], nbuf), count++;
		for (nbuf = count; nbuf > 1024; nbuf -= 1024)
			;
	}
	print_buf(buffer, nbuf), free(buffer), va_end(args);
	return (count);
}
