/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:39:52 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/13 20:10:18 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.
	 If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.
	 */

#include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t count;
// 	while (haystack[count] != '\0' && count != len)
// 	{
// 		while (needle[count] != '\0')
// 		{
			
// 		}
// 	}
// }