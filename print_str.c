#include "main.h"

/**
 * print_str - writes the string to stdout
 * @args: input string
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list args, char *buff, unsigned int nbuf)
{
	char *str;
	unsigned int n;
	char nill[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (n = 0; nill[n]; n++)
			nbuf = handl_buf(buff, nill[n], nbuf);
		return (6);
	}
	for (n = 0; str[n]; n++)
		nbuf = handl_buf(buff, str[n], nbuf);
	return (n);
}
