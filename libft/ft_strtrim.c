/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:01:52 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/18 18:56:18 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
Retur The trimmed string or NULL if the allocation fails.*/

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count_start;
	char	*trimmed;
	int		count_end;
	size_t	trimlen;

	count_start = 0;
	count_end = ft_strlen(s1);
	trimlen = 0;
	while (ft_strchr(set, s1[count_start]) != 0)
	{
		count_start++;
	}
	while (ft_strrchr(set, s1[count_end]) != 0)
	{
		count_end--;
	}
	trimlen = count_end - count_start;
	trimmed = malloc((trimlen +1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	ft_substr(trimmed, count_start, (trimlen + 1));
	return (trimmed);
}
