/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:01:52 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/18 19:15:05 by lpraca-l      ########   odam.nl         */
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
	size_t	count_start;
	char	*trimmed;
	size_t	count_end;
	size_t	trimlen;

	count_start = 0;
	count_end = ft_strlen(s1);
	trimlen = 0;
	while (ft_strchr(set, s1[count_start]) != 0)
		count_start++;
	while (ft_strrchr(set, s1[count_end]) != 0)
		count_end--;
	trimlen = count_end - count_start;
	printf("count_ strat: %zu \ncount_end: %zu \ntrimlen: %zu\n", count_start, count_end, trimlen);
	trimmed = malloc((trimlen +1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	trimmed = ft_substr(s1, count_start, (trimlen + 1));
	return (trimmed);
}
