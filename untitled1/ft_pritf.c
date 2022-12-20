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

//
// Created by laura on 19/12/22.
//
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

void ft_putchar(char c)
{
	write(1, c, 1);
}

void ft_type(char type, int *char_counter)
{
	if (type == 'c')

		ft_type(va_arg(type,char), &char_counter);
		ft_char(, );
	else if (type == 's')

		ft_type(va_arg(type,char*), &char_counter);
		ft_string();
	else if (type == 'p')

		ft_type(va_arg(type,void*), &char_counter);
		ft_poiter();
}

int ft_printf(const char *str, ...)
{
	int *char_counter;
	va_list type;

	char_counter = 0;
	while (str[char_counter] != '\0')
	{
		if (str[char_counter] == '%')
		{
			//achar que tipo de coisa vai ser imprimida
			//adicionar ao contador
		}
		else {
			ft_putchar(str[char_counter]);
			char_counter++;
		}
	}
	return (char_counter);

}
