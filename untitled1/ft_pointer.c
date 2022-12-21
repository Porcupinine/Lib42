/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 23:16:09 by laura         #+#    #+#                 */
/*   Updated: 2022/12/20 23:16:09 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/libft.h"
#include "ft_printf.h"

int ft_pointer(void *ptr)
{
	char *num;
	ft_putstr_fd("0x", 1);
	num = ft_putnbr_base((long long)ptr, 16);
	return (((int)ft_strlen(num) + 2));
}
