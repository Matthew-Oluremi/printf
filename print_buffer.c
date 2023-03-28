#include "main.h"

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuffer: number of bytes to print
 * Return: number of bytes printed.
 */
int print_buf(char *buf, unsigned int nbuffer)
{
	return (write(1, buf, nbuffer));
}
