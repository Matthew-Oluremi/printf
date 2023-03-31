#include "main.h"

/**
 * print_rot - writes the str in ROT13
 * @args: input string
 * @buff: buffer pointer
 * @nbuf: index for buffer pointer
 *
 * Return: Returns number of chars printed.
 */

int print_rot(va_list args, char *buff, unsigned int nbuf)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *string;
	unsigned int n, y, m;
	char nill[] = "(avyy)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (n = 0; nill[n]; n++)
			nbuf = handl_buf(buff, nill[n], nbuf);
		return (6);
	}
	for (n = 0; string[n]; n++)
	{
		for (m = y = 0; alpha[n]; n++)
		{
			if (str[n] == alf[y])
			{
				m = 1;
				nbuf = handl_buf(buff, rot[y], nbuf);
				break;
			}
		}
		if (m == 0)
			nbuf = handl_buf(buff, string[n], nbuf);
	}
	return (n);
}
