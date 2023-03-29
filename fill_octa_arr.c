#include "main.h"

/**
 * fill_oct_array - writes the character c to stdout
 *
 * @bry: array where is stored the binary.
 * @octa: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_oct_array(char *bry, char *octa)
{
	int om, n, y, noct, limit;

	octa[11] = '\0';
	for (n = 31, noct = 10; n >= 0; n--, noct--)
	{
		if (n > 1)
			limit = 4;
		else
			limit = 2;
		for (om = 0, n = 1; y <= limit; y *= 2, n--)
			om = ((bry[n] - '0') * y) + om;
		n++;
		octa[noct] = om + '0';
	}
	return (octa);
}
