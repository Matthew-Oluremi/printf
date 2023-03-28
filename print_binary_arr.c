#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_inP: input number
 * @isNeg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *binary, long int int_inP, int isNeg, int limit)
{
	int n;

	for (n = 0; n < limit; n++)
		binary[n] = '0';
	binary[limit] = '\0';
	for (n = limit - 1; int_inP > 1; n--)
	{
		if (int_inP == 2)
			binary[n] = '0';
		else
			binary[n] = (int_inP % 2) + '0';
		int_inP /= 2;
	}
	if (int_inP != 0)
		binary[n] = '1';
	if (isNeg)
	{
		for (n = 0; binary[n]; n++)
			if (binary[n] == '0')
				binary[n] = '1';
			else
				binary[n] = '0';
	}
	return (binary);
}

