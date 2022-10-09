/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:13:59 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/09 21:50:20 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*checks for an alphanumeric character; it is equivalent to 
(isalpha(c) || isdigit(c)).
The values returned are nonzero if the character c falls into the tested class,
and zero if not.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 0 && c < 48)
		return (0);
	else if (c > 57 && c < 65)
		return (0);
	else if (c > 90 && c < 97)
		return (0);
	else if (c > 122)
		return (0);
	else
		return (1024);
}
