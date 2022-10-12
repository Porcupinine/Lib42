/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:25:55 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/12 21:03:56 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.
	 The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	int		len;
	char	*alias;

	count = 0;
	alias = (char *) s;
	len = ft_strlen(s);
	while (alias[count] < (len + 1))
	{
		if (alias[count] != c)
			count++;
		else if (alias[count] == c)
			return (alias);
	}
	return (0);
}
