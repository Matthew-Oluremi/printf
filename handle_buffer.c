#include "main.h"

/**
 * handl_buf - concatenates buffer characters
 * @buff: buffer pointer
 * @c: charcter to concat
 * @nbuf: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int handl_buf(char *buff, char c, unsigned int nbuf)
{
	if (nbuf == 1024)
	{
		print_buf(buff, nbuf);
		nbuf = 0;

	}
	buff[nbuf] = c;
	nbuf++;
	return (nbuf);
}
