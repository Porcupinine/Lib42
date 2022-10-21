/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:05:49 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/21 10:31:29 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*checks  for an alphabetic character; in the standard "C" locale, it is
equivalent to (isupper(c) || is‐lower(c)).  In some locales, there may be 
additional characters for  which  isalpha()  is  true—letters
which are neither uppercase nor lowercase.
The values returned are nonzero if the character c falls into the tested class,
and zero if not.*/

#include "libft.h"

// int	ft_isalpha(int c)
// {
// 	if (c >= 0 && c < 65)
// 		return (0);
// 	else if (c > 90 && c < 97)
// 		return (0);
// 	else if (c > 122)
// 		return (0);
// 	else
// 		return (1);
// }

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
