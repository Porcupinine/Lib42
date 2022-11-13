/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 17:22:11 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/31 21:37:53 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file
descriptor.
 n: The integer to output.
fd: The file descriptor on which to write.*/

#include "libft.h"

long long int	exponential(long long x, long long n)
{
	long long int	i;
	long long int	number;

	number = 1;
	i = 0;
	while (i < n)
	{
		number *= x;
		i++;
	}
	return (number);
}

void	ft_putnbr_fd(int toconvert, int fd)
{
	long long int	digit;
	long long int	n;
	long long int	exp;
	long long int	original;
	long long int	toconvertlong;

	toconvertlong = toconvert;
	if (toconvertlong < 0)
	{
		ft_putchar_fd('-', fd);
		toconvertlong = toconvertlong * (-1);
	}
	original = toconvertlong;
	n = 10;
	while (n >= 1)
	{
		exp = exponential(10, n);
		digit = (toconvertlong / exp);
		if (original >= exp)
			ft_putchar_fd((digit + 48), fd);
		toconvertlong = toconvertlong - (digit * exp);
		n--;
	}
	ft_putchar_fd((toconvertlong + 48), fd);
}
