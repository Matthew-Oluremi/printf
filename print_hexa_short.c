#include "main.h"

/**
 * prinhhex - prints a short decimal in hexadecimal
 * @args: input string
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: number of chars printed
 */

int prinhhex(va_list args, char *buff, unsigned int nbuf)
{
	short int int_inPut, n, negative, number, digit1;
	char *hexa, *bin;

	int_inPut = va_arg(args, int);
	negative = 0;
	if (int_inPut == 0)
	{
		nbuf = handl_buf(buff, '0', nbuf);
		return (1);
	}
	if (int_inPut < 0)
	{
		int_inPut = (int_inPut * -1) - 1;
		negative = 1;
	}

	bin = malloc(sizeof(char) * (16 + 1));
	bin = fill_binary_array(bin, int_inPut, negative, 16);
	hexa = malloc(sizeof(char) * (4 + 1));
	hexa = fill_hex_array(bin, hexa, 0, 4);
	for (digit1 = n = number = 0; hexa[n]; n++)
	{
		if (hexa[n] != '0' && digit1 == 0)
			digit1 = 1;
		if (digit1)
		{
			nbuf = handl_buf(buff, hexa[n], nbuf);
			number++;
		}
	}
	free(bin);
	free(hexa);
	return (number);
}

