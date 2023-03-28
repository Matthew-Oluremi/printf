#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list args, char *buff, unsigned int nbuf);
int print_str(va_list args, char *buff, unsigned int nbuf);
int print_int(va_list args, char *buff, unsigned int nbuf);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buff, char c, unsigned int nbuf);
int print_buf(char *buff, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
char *fill_binary_array(char *binary, long int int_inP, int isNeg, int limit)

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

#endif
