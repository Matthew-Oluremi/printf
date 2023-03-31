#include "main.h"

/**
 * fill_hex_array - writes the character c to stdout
 *
 * @bry: array where is stored the binary.
 * @hexa: array where is stored the hexadecimal.
 * @nsupp: integer that determines if the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit: size of hex
 * Return: binary array.
 */
char *fill_hex_array(char *bry, char *hexa, int nsupp, int limit)
{
	int om;
	int n;
	int y;
	int tolet;

	hexa[limit] = '\0';
	if (nsupp)
		tolet = 55;
	else
		tolet = 87;
	for (n = (limit * 4) - 1; n >= 0; n--)
	{
		for (om = 0, y = 1; y <= 8; y *= 2, n--)
			om = ((bry[n] - '0') * y) + om;
		n++;
		if (om < 10)
			hexa[n / 4] = om + 48;
		else
			hexa[n / 4] = om + tolet;
	}
	return (hexa);
}
