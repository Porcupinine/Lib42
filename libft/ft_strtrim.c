/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:01:52 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/17 18:14:57 by lpraca-l      ########   odam.nl         */
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
	int		count;
	int		count_set;

	count_start = 0;
	count_end = ft_strlen(s1);
	count = 0;
	count_set = ft_strlen(set);
	trimmed = malloc(ft_strlen(s1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	while (ft_strchr(s1 + count, set[count_set]) != 0 && count_set != 0)
	{
		count_start++;
		count++;
		count_set--;
	}
	count = count_end;
	count_set = 0;
	while (ft_strrchr(s1 + count, set[count_set]) != 0 && count_set != 0)
	{
		count_end--;
		count--;
		count_set--;;
	}
	count = 0;
	while (count_start != (count_end))
	{
		trimmed[count] = s1[count_start];
		count_start++;
		count++;
	}
	return (trimmed);
}
