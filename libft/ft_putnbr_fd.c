/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 17:22:11 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/25 18:28:47 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file
descriptor.
 n: The integer to output.
fd: The file descriptor on which to write.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*number;

	number = ft_itoa(n);
	if (number == NULL)
		return ;
	ft_putstr_fd(number, fd);
	free(number);
}
