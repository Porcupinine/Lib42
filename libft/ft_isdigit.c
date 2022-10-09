/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:09:33 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/09 21:51:07 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*checks for a digit (0 through 9).
The values returned are nonzero if the character c falls into the tested class,
and zero if not.*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (c);
	else
		return (0);
}
