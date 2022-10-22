/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 17:22:11 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/22 21:29:36 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file
descriptor.
 n: The integer to output.
fd: The file descriptor on which to write.*/

#include "libft.h"

// static long long int	exponential(long long x, long long n2)
// {
// 	long long int	i;
// 	long long int	number;

// 	number = 1;
// 	i = 0;
// 	while (i < n2)
// 	{
// 		number *= x;
// 		i++;
// 	}
// 	return (number);
// }

// void	ft_putnbr_fd(int n, int fd)
// {
// 	long long int	digit;
// 	long long int	n2;
// 	long long int	exp;
// 	long long int	original;
// 	long long int	toconvert;

// 	toconvert = n;
// 	if (toconvert < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		toconvert = toconvert * (-1);
// 	}
// 	original = toconvert;
// 	n2 = 10;
// 	while (n2 >= 1)
// 	{
// 		exp = exponential(10, n2);
// 		digit = (toconvert / exp);
// 		if (original > exp)
// 			ft_putchar_fd((digit + 48), fd);
// 		toconvert = toconvert - (digit * exp);
// 		n2--;
// 	}
// 	ft_putchar_fd((toconvert + 48), fd);
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	*number;

	number = ft_itoa(n);
	if (number == NULL)
		return ;
	ft_putstr_fd(number, fd);
	free(number);
}
