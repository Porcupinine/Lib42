/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:19:41 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/09 21:52:16 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function calculates the length of the string pointed to by s, 
excluding the terminating null byte ('\0').
The strlen() function returns the number of bytes in the string pointed to by s.
*/

#include "libft.h"

int	ft_strlen(const char *c)
{
	int	count;

	count = 0;
	while (c[count] != '\0')
	{
		count++;
	}
	return (count);
}
