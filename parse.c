#include "main.h"
#include <stdarg.h>
/**
 * @param format : list of parameters
 * @param f_list : our typedef
 * @param vaList : array of parameters
 */
int parse(const char *format, print_y f_list,va_list vaList)
{
    unsigned int i;
    int count 0;
   
    //looping through the array of formats
    while (format[i])
    {
        for(; format[i] != '%' && format[i];i++)
        {
            _putchar(format[i]);
            count++;
        }
        if(!format[i])
            return(count);
		f = parse(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}