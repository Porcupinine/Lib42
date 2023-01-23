/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/22 23:45:00 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/23 00:40:40 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
returns The string created from the successive applications
of ’f’. Returns NULL if the allocation fails.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		count;

	count = 0;
	str = ft_calloc((ft_strlen(s) +1), sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[count] != '\0')
	{
		str[count] = f(count, s[count]);
		count++;
	}
	return (str);
}
