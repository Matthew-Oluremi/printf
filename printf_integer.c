#include "main.h"

/**
 * print_int - prints an integer
 * @args: input string
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list args, char *buff, unsigned int nbuf)
{
	int int_inPut;
	unsigned int int_inP, int_tempo, n, dIv, isNeg;

	int_inPut = va_arg(args, int);
	isNeg = 0;
	if (int_inPut < 0)
	{
		int_inP = int_inPut * -1;
		nbuf = handl_buf(buff, '-', nbuf);
		isNeg = 1;
	}
	else
	{
		int_inP = int_inPut;
	}

	int_tempo = int_inP;
	dIv = 1;

	while (int_tempo > 9)
	{
		dIv *= 10;
		int_tempo /= 10;
	}

	for (n = 0; dIv > 0; dIv /= 10, n++)
	{
		nbuf = handl_buf(buff, ((int_inP / dIv) % 10) + '0', nbuf);
	}
	return (n + isNeg);
}
