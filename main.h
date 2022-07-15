#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_stg(va_list arg);
int print_intg(va_list arg);
int print_unsInt(va_list arg);
int print_unsint2bin(va_list arg);
int print_unsint2oct(va_list arg);
int print_hexLow(va_list arg);
int print_hexUpp(va_list arg);
int print_Str(va_list arg);
int print_ptr(va_list arg);
int print_str_rev(va_list arg);
int print_rot13(va_list arg);
int print_buf(char *buf, unsigned int nbuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibufi;
int prinpint(va_list arguments, char *buf, unsigned int ibuf);



/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @identifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *identifier;
int (*printer)(va_list);
} identifierStruct;


#endif
