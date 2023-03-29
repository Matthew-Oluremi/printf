#include "main.h"

/**
 * print_oct - prints decimal number in octal
 * @args: input number
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_oct(va_list args, char *buff, unsigned int nbuf)
{
	int int_inPut, n, negative, number, digit1;
	char *oct, *bin;

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
	oct = malloc(sizeof(char) * (11 + 1));
	oct = fill_oct_array(bin, oct);
	for (digit1 = n = number = 0; oct[n]; n++)
	{
		if (oct[n] != '0' && digit1 == 0)
			digit1 = 1;
		if (digit1)
		{
			nbuf = handl_buf(buff, oct[n], nbuf);
			number++;
		}
	}
	free(bin);
	free(oct);
	return (number);
}
