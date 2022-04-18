#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * create a function that checks for the correct format specifier 
 * the format specifies
 * @f: function to print
 * @y: type to print
 * return : pointer to valid function or null
 */
int parse (const char *format, ...)
// int (*check (const char *format)(va_list))
{
    int count;
    //initialize the array of formats assinged to the user defined varibles.
    print_y f_list[] = {
        {"c", print_c},
		{"s", print_s},
        {"%", print_p},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
    };
    va_list vaList;

    if(vaList == Null)
        return(-1);

    for (i = 0; p[i].y != NULL; i++)
    {
        if(*p[i].f) == *format
        {
            break;
        }
    }
    return(*p[i].f);
	if (format == NULL)
		return (-1);
	va_start(valist, format);
	/*Calling parse function*/
	printed = parse(format, print_y, valist);
	va_end(valist);
	return (count);
}