/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:58:23 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/21 15:19:54 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).
	 return the total length of the string they tried to create 
	 For strlcat() that means the 
	 initial length of dst plus the length of src. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count_dst;
	size_t	count_src;

	count_src = 0;
	count_dst = 0;
	while (dst[count_dst] != '\0' && count_dst < dstsize)
		count_dst++;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[count_src] != '\0')
	{
		dst[count_dst] = src[count_src];
		count_dst++;
		count_src++;
	}
	dst[count_dst] = '\0';
	return (count_dst);
}
