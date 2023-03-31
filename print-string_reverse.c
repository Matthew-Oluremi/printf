#include "main.h"

/**
 * print_rev - writes the str in reverse
 * @args: input string
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 *
 * Return: number of chars printed.
 */

int print_rev(va_list args, char *buff, unsigned int nbuf)
{
	char *string;
	unsigned int n;
	int y = 0;
	char nill[] = "(llun)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (n = 0; nill[n]; n++)
			nbuf = handl_buf(buff, nill[n], nbuf);
		return (6);
	}
	for (n = 0; string[n]; n++)
		;
	y = n - 1;
	for (; y >= 0; y--)
	{
		nbuf = handl_buf(buff, string[y], nbuf);
	}
	return (n);
}
