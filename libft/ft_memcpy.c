/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:58:56 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/08 17:08:15 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	int		count;
	char	*alias_d;
	char	*alias_s;

	count = 0;
	alias_d = dest;
	alias_s = src;
	while (count < n)
	{
		alias_d[count] = alias_s[count];
		count++;
	}
	return (dest);
}
