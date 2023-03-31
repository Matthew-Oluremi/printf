#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
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
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
char *fill_binary_array(char *binary, long int int_inP, int isNeg, int limit);
char *fill_hex_array(char *bry, char *hexa, int nsupp, int limit);
char *fill_oct_array(char *bry, char *octa);
int print_hex(va_list args, char *buff, unsigned int nbuf);
int print_oct(va_list args, char *buff, unsigned int nbuf);
int print_unt(va_list args, char *buff, unsigned int nbuf);
int print_upx(va_list args, char *buff, unsigned int nbuf);
int prinhhex(va_list args, char *buff, unsigned int nbuf);
int print_pointer(va_list args, char *buff, unsigned int nbuf);

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
