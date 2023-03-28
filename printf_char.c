#include "main.h"
#include <stdio.h>

/**
 * print_chr - writes the character c
 * @args: input char
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 * Return: On success 1.
 */

int print_chr(va_list args, char *buff, unsigned int nbuf)
{
	char c;

	c = va_arg(args, int);
	handl_buf(buff, c, nbuf);

	return (1);
}
