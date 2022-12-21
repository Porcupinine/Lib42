/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 23:16:09 by laura         #+#    #+#                 */
/*   Updated: 2022/12/21 17:32:21 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer( unsigned long ptr)
{
	int	count;

	count = 2;
	ft_putstr_fd("0x", 1);
	count += ft_putnbr_ulong(ptr, "0123456789abcdef");
	return (count);
}
