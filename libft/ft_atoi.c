/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 20:58:58 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/17 13:31:03 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The atoi() function converts the initial portion of the string pointed to
 by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);
except that atoi() does not detect errors.
The atol() and atoll() functions behave the same as atoi(), except that 
they convert the  initial  portion  of the string to their return type of
long or long long.
return The converted value.*/

#include "libft.h"

void	deal_isspace_issign(char *alias, int *count, int *count_m, int *count_p)
{
	while (alias[*count] == ' ' || alias[*count] == '\t'
		|| alias[*count] == '\r'|| alias[*count] == '\n'
		|| alias[*count] == '\v')
			(*count)++;
	while (alias[*count] == '-')
	{
		(*count)++;
		(*count_m)++;
	}
	if (alias[*count] == '+')
	{
		(*count)++;
		(*count_p)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int		count;
	char	*alias;
	int		nbr;
	int		count_minus;
	int		count_plus;

	alias = (char *) nptr;
	count = 0;
	count_minus = 0;
	nbr = 0;
	count_plus = 0;
	deal_isspace_issign(alias, &count, &count_minus, &count_plus);
	while (ft_isdigit(alias[count]) != 0)
	{
			nbr = ((nbr * 10) + (alias[count] - 48));
			count++;
	}
	if (count_minus == 1)
	{
		nbr = (-1 * nbr);
		return (nbr);
	}
	else if (count_minus > 1 || count_plus > 1)
		return (0);
	return (nbr);
}
