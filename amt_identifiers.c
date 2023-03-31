#include "main.h"

/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */

int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"%", print_prg}, {"b", print_bnr},
		{"u", print_unt}, {"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"p", print_add}, {NULL, NULL}};

	int m = 0, y = 0, index1;

	index1 = index;
	while (pr[m].type_arg)
	{
		if (s[index] == pr[m].type_arg[y])
		{
			if (pr[m].type_arg[y + 1] != '\0')
				index++, y++;
			else
				break;
		}
		else
		{
			y = 0;
			m++;
			index = index1;
		}
	}
	return (y);
}
