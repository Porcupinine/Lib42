/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 14:34:24 by laura         #+#    #+#                 */
/*   Updated: 2022/12/19 14:34:24 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED1_FT_PRINTF_H
#define UNTITLED1_FT_PRINTF_H

# include <stddef.h>

int ft_char(char c);
int ft_string(char *str);
int ft_num(int nb);
int ft_up_hex(unsigned int HEX);
int ft_lw_hex(unsigned int hex);
int ft_uint(unsigned int nb);
int ft_pointer(void *ptr);
int	ft_putnbr_base(long long nbr, char*base);
int ft_printf(const char *str, ...);
size_t	ft_strlen(const char *c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif //UNTITLED1_FT_PRINTF_H
