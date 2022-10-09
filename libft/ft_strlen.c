/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:19:41 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/08 16:23:31 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *c)
{
	int	count;

	count = 0;
	while (c[count] != "\0")
	{
		count++;
	}
	return (count);
}
