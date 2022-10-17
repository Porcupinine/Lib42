/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:14:55 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/17 14:30:24 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is ofmaximum size ’len’.
Returns The substring or NULL if the allocation fails.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;

	count = 0;
	sub = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (s[start] != '\0' && count < len)
	{
		sub[count] = s[start];
		count++;
		start++;
	}
	return (sub);
}
