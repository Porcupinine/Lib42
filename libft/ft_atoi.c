/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 20:58:58 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/21 14:44:11 by lpraca-l      ########   odam.nl         */
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

int	deal_isspace_issign(char *alias, int *count, int *count_m, int *count_p)
{
	while (alias[*count] == ' ' || alias[*count] == '\t'
		|| alias[*count] == '\r' || alias[*count] == '\n'
		|| alias[*count] == '\v' || alias[*count] == '\f')
			(*count)++;
	while (alias[*count] == '-')
	{
		if (alias[*count + 1] == '+' || alias[*count + 1] == '-')
			return (0);
		(*count)++;
		(*count_m)++;
	}
	if (alias[*count] == '+')
	{
		if (alias[*count + 1] == '+')
			return (0);
		(*count)++;
		(*count_p)++;
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		count;
	char	*alias;
	int		nbr;
	int		count_m;
	int		count_p;

	alias = (char *) nptr;
	count = 0;
	count_m = 0;
	nbr = 0;
	count_p = 0;
	if (deal_isspace_issign(alias, &count, &count_m, &count_p) == 0)
		return (0);
	while (ft_isdigit(alias[count]) != 0)
	{
			nbr = ((nbr * 10) + (alias[count] - 48));
			count++;
	}
	if (count_m == 1)
	{
		nbr = (-1 * nbr);
		return (nbr);
	}
	return (nbr);
}
