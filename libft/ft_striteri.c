/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 00:17:18 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/23 01:00:57 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		count;
	int s_len = ft_strlen(s);

	count = 0;

	while (count < s_len)
	{
		f(count, s + count);
		count++;
	}
}

