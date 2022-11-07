/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:18:41 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/11/06 01:00:40 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	counts1;
	char	*join;
	size_t	len;
	size_t	counts2;

	counts1 = 0;
	counts2 = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc((len + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	while (s1[counts1] != '\0')
	{
		join[counts1] = s1[counts1];
		counts1++;
	}
	while (s2[counts2] != '\0')
	{
		join[counts1] = s2[counts2];
		counts1++;
		counts2++;
	}
	join[counts1] = '\0';
	return (join);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		count;

	count = 0;
	dup = malloc((ft_strlen(s1) + 1) * (sizeof(char)));
	if (dup == NULL)
		return (NULL);
	while (s1[count] != '\0')
	{
		dup[count] = s1[count];
		count++;
	}
	dup[count] = '\0';
	return (dup);
}

size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)
{
	size_t	count;
	char	*alias;

	alias = (char *) src;
	count = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (count < (dstsize -1) && alias[count] != '\0')
	{
		dst[count] = alias[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}
