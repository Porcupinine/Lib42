/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:24:06 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/08 16:48:38 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	int		count;
	char	*alias;

	alias = s;
	count = 0;
	while (count < n)
	{
		alias[count] = c;
		count++;
	}
	return (s);
}
