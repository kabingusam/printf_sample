#include<stdarg.h>
#include<stdio.h>
#include "main.h"
/**
 * printf
 */

int _printf(const char *format, ...)
{
    char* ptr;
    unsigned int i;
    va_list vl;
    va_start(vl, format);
    
    for(char* ptr = format; *ptr != '\0'; ptr++)
    {
        if(*ptr == '%')
        {
            ptr++;
            s = va_arg(vl, char*) //fetch string
                ;
            while(*s != '\0');
                putchar(*s++);
            while( i == 'c')
            {
                i = va_arg(vl, int) //fetch char 
                    ;
                    putchar(i++);
            }
            while( i == 'd')
            {
                i = va_arg(vl, int);//fetch decimal
                if(i < 0)
                {
                    i = -i;
                        putchar('-');
                }
                puts(convert(i,10));
                putchar(i++);
            }
            while( i == 'i')
            {
                i = va_arg(vl, int);
                if(i <0)
                {
                    i = -i;
                        putchar('-');
                }
                puts(convert(i,10));
                putchar(i++);
            } 
        }
        putchar(*ptr);
    }
}