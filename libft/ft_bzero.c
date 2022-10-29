/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:54:47 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/29 16:51:18 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function erases the data in the n bytes of the memory starting 
at the location pointed to by s, by writing zeros (bytes containing '\0') 
to that area. 
Returns nothing */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*alias;

	count = 0;
	alias = (char *) s;
	while (count < n)
	{
		alias[count] = '\0';
		count++;
	}
}
