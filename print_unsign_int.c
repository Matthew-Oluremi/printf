#include "main.h"

/**
 * print_unt - outputs an unsigned integer
 * @args: number to output
 * @buff: pointer to buffer
 * @nbuf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_unt(va_list args, char *buff, unsigned int nbuf)
{
	unsigned int intIn;
	unsigned int intTemp;
	unsigned int itterator;
	unsigned int div;

	intIn = va_arg(args, unsigned int);
	intTemp = intIn;
	div = 1;

	while (intTemp > 9)
	{
		div *= 10;
		intTemp /= 10;
	}

	for (itterator = 0; div > 0; div /= 10, itterator++)
	{
		nbuf = handl_buf(buff, ((intIn / div) % 10) + '0', nbuf);
	}

	return (itterator);
}
