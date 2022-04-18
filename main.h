#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
/**
 * @y: type to print
 * @f: function to print
 */
typedef struct print
{
    char *y;
    int(*f)(va_list);
} print_y;

int _putchar(char c);
int parse (const char *format, print_y f_list,va_list vaList);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_p(va_list p);//print %
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif // _MAIN_H