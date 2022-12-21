/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pritf.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 14:34:18 by laura         #+#    #+#                 */
/*   Updated: 2022/12/19 14:34:18 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*%c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
 *
 * Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

 ERROR return -1 else return number of char
 */

#include <stdarg.h>
#include "ft_printf.h"

int ft_type(va_list content, char type)
{
    int i;

    i = 0;
    if (type == '%')
    {
        i++;
        ft_putchar_fd(type, 1);
    }
    else if (type == 'c')
        i += ft_char(va_arg(content, int));
    else if (type == 's')
        i += ft_string(va_arg(content, char*));
    else if (type == 'p')
        i += ft_pointer(va_arg(content, void*));
    else if (type == 'd' || type == 'i')
		i += ft_putnbr_base(va_arg(content, int), "0123456789");
    else if (type == 'u')
		i += ft_putnbr_base(va_arg(content, unsigned long long), "0123456789");
    else if (type == 'x')
		i += ft_putnbr_base(va_arg(content, long long), "0123456789abcdef");
    else if (type == 'X')
		i += ft_putnbr_base(va_arg(content, long long), "0123456789ABCDEF");
    return (i);
}

int ft_printf(const char *str, ...)
{
	int     i;
    int     char_counter;
	va_list content;

    i = 0;
	char_counter = 0;
	va_start(content, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i +1]))
		{
			char_counter += ft_type(content, str[i + 1]);
			i += 2;
            if (str[i] == '%')
                i++;
		}
		else {
			ft_putchar_fd(str[i], 1);
			i++;
            char_counter++;
		}
	}
    va_end(content);
	return (char_counter);
}
