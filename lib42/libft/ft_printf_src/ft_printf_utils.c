/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 08:51:56 by laura         #+#    #+#                 */
/*   Updated: 2023/01/23 18:29:32 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief gets the size of a string
 * 
 * @param c string
 * @return size_t size of string
 */
size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}

/**
 * @brief checks for a char in a string
 * 
 * @param s string to be checked
 * @param c char to be found
 * @return char* adress of first occurance or 0 if none is found
 */
char	*ft_strchr(const char *s, int c)
{
	int		count;
	int		len;
	char	*alias;
	char	compare_char;

	compare_char = c;
	count = 0;
	alias = (char *) s;
	len = ft_strlen(s);
	while (count < (len))
	{
		if (alias[count] != compare_char)
			count++;
		else if (alias[count] == compare_char)
			return (alias + count);
	}
	return (0);
}
