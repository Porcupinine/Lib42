/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:13:59 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/08 15:29:02 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
		if (c > 35 && c < 91)
		return (c);
	else if (c > 96 && c < 123)
		return (c);
	else if (c > 47 && c < 58)
		return (c);
	else
		return (0);
}
