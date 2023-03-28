#include "main.h"

/**
 * print_bnr - print decimal numbers in binary
 * @arguments: input string
 * @buf: pointer to buffer
 * @ibuf: index to buffer pointer
 * Return: number of chars printed
 */
int print_bnr(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	int numOfBytes;
	int n;
	int first_one;
	int isnegative;
	char *binary;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 32);
	first_one = 0;
	for (numOfBytes = n = 0; binary[n]; n++)
	{
		if (first_one == 0 && binary[n] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuf = handl_buf(buf, binary[n], ibuf);
			numOfBytes++;
		}
	}
	free(binary);
	return (numOfBytes);
}
