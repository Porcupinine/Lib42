/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_dig_hex.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 18:44:44 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/12/20 18:44:44 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//
// Created by laura on 19/12/22.
//
#include "libft-winner/libft.h"
#include <unistd.h>
// #include <stdio.h>

void	print_result(char *conv, int count_conv, int original)
{
    char	c;
    int		count;

    count = count_conv -1;
    c = '-';
    if (original < 0)
        write(1, &c, 1);
    while (count >= 0)
        write(1, &(conv[count--]), 1);
}

int	check_base(char *base)
{
    int	count;
    int	mv_count;
    int	base_size;

    base_size = 0;
    count = 0;
    while (base[base_size] != '\0')
        base_size++;
    if (base_size < 2)
        return (0);
    while (base[count] != '\0')
    {
        if (base[count] == '-' || base[count] == '+')
            return (0);
        mv_count = count + 1;
        while (base[mv_count] != '\0')
        {
            if (base[count] == base[mv_count++])
                return (0);
        }
        count++;
    }
    return (1);
}

void	ft_putnbr_base(int nbr, char*base)
{
    int			base_size;
    char		conv[64];
    int			count_conv;
    int			leftover;
    long long	whatever;

    whatever = nbr;
    count_conv = 0;
    base_size = 0;
    if (check_base(base) == 0)
        return ;
    if (whatever < 0)
        whatever *= (-1);
    while (base[base_size] != '\0')
        base_size++;
    while (whatever >= base_size)
    {
        leftover = whatever % base_size;
        whatever = whatever / base_size;
        conv[count_conv++] = base[leftover];
    }
    conv[count_conv++] = base[whatever];
    print_result(conv, count_conv, nbr);
}

int ft_num(int nb)
{
    char *count;

    count = ft_itoa(nb);
    ft_putstr_fd(count, 1);
    return(ft_strlen(count));
}

int ft_up_hex(unsigned int HEX)
{

}

int ft_lw_hex(unsigned int hex)
{

}
