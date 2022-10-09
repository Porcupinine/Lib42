/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:54:47 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/08 16:57:41 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, unsigned int n)
{
	int		count;
	char	*alias;

	count = 0;
	alias = s;
	while (count < n)
	{
		alias[count] = "\0";
		count++;
	}
}
