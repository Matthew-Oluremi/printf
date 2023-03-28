#include "main.h"

/**
 * handl_buf - concatenates buffer characters
 * @buf: buffer pointer
 * @c: charcter to concat
 * @indbuf: index of buffer pointer
 * Return: index of buffer pointer
 */
unsigned int handl_buf(char *buf, char c, unsigned int indbuf)
{
	if (indbuf == 1024)
	{
		print_buf(buf, indbuf);
		buf = 0;

	}
	buf[indbuf] = c;
	indbuf++;
	return (indbuf);
}
