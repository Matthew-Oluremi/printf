#include "main.h"

/**
 * print_upx - prints a decimal in hexadecimal
 * @args: The character to print
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: number of chars printed
 */

int print_upx(va_list args, char *buff, unsigned int nbuf)
{
	int int_inPut, n, negative, number, digit1;
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
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_binary_array(bin, int_inPut, negative, 32);
	hexa = malloc(sizeof(char) * (8 + 1));
	hexa = fill_hex_array(bin, hexa, 1, 8);
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

