#include "main.h"
/**
 * print_hex - prints a decimal in hexadecimal
 * @args: input string
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: number of chars printed
 */

int print_hex(va_list args, char *buff, unsigned int nbuf)
{
	int int_inPut, n, negative, number, digit1;
	char *hex, *bin;

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
	hex = malloc(sizeof(char) * (8 + 1));
	hex = fill_hex_array(bin, hex, 0, 8);
	for (digit1 = n = number = 0; hex[n]; n++)
	{
		if (hex[n] != '0' && digit1 == 0)
			digit1 = 1;
		if (digit1)
		{
			nbuf = handl_buf(buff, hex[n], nbuf);
			number++;
		}
	}
	free(bin);
	free(hex);
	return (number);
}
