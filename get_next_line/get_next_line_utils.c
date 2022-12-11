/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:18:41 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/11/14 20:06:17 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *c)
{
	long	count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2, long buff_len_to_get)
{
	long		counts1;
	char		*join;
	long		len;
	long		counts2;

	counts1 = 0;
	counts2 = 0;
	len = ft_strlen(s1) + buff_len_to_get;
	join = malloc((len + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	while (s1[counts1] != '\0')
	{
		join[counts1] = s1[counts1];
		counts1++;
	}
	while (counts2 < buff_len_to_get)
	{
		join[counts1] = s2[counts2];
		counts1++;
		counts2++;
	}
	join[counts1] = '\0';
	return (join);
}

char	*ft_strlcpy(const char	*src, long dst_size)
{
	long	count;
	char	*alias;
	char	*dst;

	alias = (char *) src;
	count = 0;
	dst = malloc((dst_size + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (count < dst_size)
	{
		dst[count] = alias[count];
		count++;
	}
	dst[count] = '\0';
	return (dst);
}

void	*ft_memset(void *s, char c, long n)
{
	long	count;
	char	*alias;

	alias = s;
	count = 0;
	while (count < n)
	{
		alias[count] = c;
		count++;
	}
	return (s);
}
