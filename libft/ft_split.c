/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 13:59:41 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/20 16:40:26 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
The array of new strings resulting from the split.
NULL if the allocation fails.*/

#include "libft.h"
#include <stdio.h>

int	count_words(char *s, char c)
{
	int		count;
	int		count_words;

	count = 0;
	count_words = 0;
	while (s [count] != '\0')
	{
		while (s[count] != c)
			count++;
		count_words++;
		while (s[count] == c)
			count++;
	}
	return (count_words);
}

char	*get_string(char *s, char c, int *count_str)
{
	int		count;
	char	*str;

	count = *count_str;
	while (s[*count_str] != c)
	{
		count_str++;
	}
	str = ft_substr(s, count, (*count_str - count));
	while (s[*count_str] == c)
		count_str++;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int					words;
	char				**arr;
	int					count_str;
	char				*temp_str;
	int					count_arr;

	count_str = 0;
	count_arr = 0;
	words = count_words((char *)s, c);
	arr = calloc((words + 1), sizeof(char *));
	while (count_arr < (words +1))
	{
		temp_str = get_string((char *)s, c, &count_str);
		arr[count_arr] = calloc(ft_strlen(temp_str + 1), sizeof(char));
		arr[count_arr] = ft_strdup(temp_str);
		count_arr++;
		free(temp_str);
	}
	arr[count_arr] = NULL;
	return (arr);
}
