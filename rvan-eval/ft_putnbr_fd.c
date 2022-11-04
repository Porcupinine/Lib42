/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 17:22:11 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/31 18:31:54 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file
descriptor.
 n: The integer to output.
fd: The file descriptor on which to write.*/

#include "libft.h"

long int	exponential(long x, long n)
{
	long int	i;
	long int	number;

	number = 1;
	i = 0;
	while (i < n)
	{
		number *= x;
		i++;
	}
	return (number);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long int	digit;
	long int	n;
	long int	exp;
	long int	original;
	long int	nblong;

	nblong = nb;
	if (nblong < 0)
	{
		ft_putchar_fd('-', fd);
		nblong = nblong * (-1);
	}
	original = nblong;
	n = 10;
	while (n >= 1)
	{
		exp = exponential(10, n);
		digit = (nblong / exp);
		if (original > exp)
			ft_putchar_fd((digit + 48), fd);
		nblong = nblong - (digit * exp);
		n--;
	}
	ft_putchar_fd((nblong + 48), fd);
}
