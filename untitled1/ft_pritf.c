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
#include <unistd.h>
#include "ft_printf.h"
//#include "libft/libft.h"

int ft_type(va_list content, char type)
{
    int char_counter;

    char_counter = 0;
    if (type == 'c')
        char_counter += ft_char(va_arg(content, char));
    else if (type == 's')
        char_counter += ft_string(va_arg(content, char*));
    else if (type == 'p')
        char_counter += ft_pointer(va_arg(content, void*));
    else if (type == 'd' || type == 'i')
//        char_counter += ft_num(va_arg(content, int));
		char_counter += ft_putnbr_base(va_arg(content, long long), "0123456789");
    else if (type == 'u')
//        char_counter += ft_uint(va_arg(content, unsigned int));
		char_counter += ft_putnbr_base(va_arg(content, long long), "0123456789");
	else if (type == 'x')
//        char_counter += ft_up_hex(va_arg(content, unsigned int));
		char_counter += ft_putnbr_base(va_arg(content, long long), "0123456789abcdef");
	else if (type == 'X')
//        char_counter += ft_lw_hex(va_arg(content, unsigned int));
		char_counter += ft_putnbr_base(va_arg(content, long long), "0123456789ABCDEF");

	else if (type == '%')
    {
        char_counter += 1;
        ft_putchar_fd(type, 1);
    }
    return (char_counter);
}

int ft_printf(const char *str, ...)
{
	int index_counter;
    int char_counter;
	va_list content;

    index_counter = 0;
	char_counter = 0;
	va_start(content, str);
	while (str[index_counter] != '\0')
	{
		if (str[index_counter] == '%')
		{
			char_counter += ft_type(content, str[index_counter + 1]);
			index_counter++;
			index_counter++;
		}
		else {
			ft_putchar_fd(str[index_counter], 1);
			index_counter++;
            char_counter++;
		}
	}
	return (index_counter);
}
