#include "main.h"

/**
 * print_unt - outputs an unsigned integer
 * @args: number to output
 * @buf: pointer to buffer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_unt(va_list args, char *buf, unsigned int ibuf)
{
	unsigned int intIn;
	unsigned int intTemp;
	unsigned int itterator;
	unsigned int div;

	intIn = va_arg(arguments, unsigned int);
	intTemp = intIn;
	div = 1;

	while (intTemp > 9)
	{
		div *= 10;
		intTemp /= 10;
	}

	for (itterator = 0; div > 0; div /= 10, itterator++)
	{
		ibuf = handle_buffer(buf, ((intIn / div) % 10) + '0', ibuf);
	}

	return (itterator);
}
