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

int     ft_char(int c);
int     ft_string(char *str);
int     ft_pointer(unsigned long ptr);
int	    ft_putnbr_base(long long nbr, char*base);
int     ft_printf(const char *str, ...);
size_t	ft_strlen(const char *c);
int 	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
int	ft_putnbr_base_ulong(unsigned long long nbr, char*base);



#endif //UNTITLED1_FT_PRINTF_H
