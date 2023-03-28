#include "main.h"
#include <stdio.h>

/**
 * print_prg - writes the character c to stdout
 * @a: input char
 * @buff: buffer pointer
 * @n: index for buffer pointer
 * Return: On success 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buff, unsigned int n)
{
	handl_buf(buff, '%', n);

	return (1);
}
