/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:58:56 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/09 21:51:33 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.  Use memmove(3) if the memory areas do 
overlap.
The memcpy() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		count;
	char		*alias_d;
	const char	*alias_s;

	count = 0;
	alias_d = dest;
	alias_s = src;
	while (count < n)
	{
		alias_d[count] = alias_s[count];
		count++;
	}
	return (dest);
}
