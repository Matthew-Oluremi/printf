#include "main.h"

/**
 * print_pointer - prints the address of an input variable
 * @args: input address
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 *
 * Return: number of bytes printed.
 */
int print_pointer(va_list args, char *buff, unsigned int nbuf)
{
	void *add;
	long int intInput;
	int i, count, firstDig, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(args, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			nbuf = handl_buf(buff, nill[i], nbuf);
		return (5);
	}
	intInput = (intptr_t)add;
	isnegative = 0;
	if (intInput < 0)
	{
		intInput = (intInput * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = fill_binary_array(binary, intInput, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 0, 16);
	nbuf = handl_buf(buff, '0', nbuf);
	nbuf = handl_buf(buff, 'x', nbuf);
	for (firstDig = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && firstDig == 0)
			firstDig = 1;
		if (firstDig)
		{
			nbuf = handl_buf(buff, hexadecimal[i], nbuf);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
