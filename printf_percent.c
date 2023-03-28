#include "main.h"
#include <stdio.h>

/**
 * print_prg - writes the character c to stdout
 * @a: input char
 * @buff: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buff, unsigned int i)
{
	handl_buf(buff, '%', i);

	return (1);
}
