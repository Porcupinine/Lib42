/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_ulong.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 08:36:00 by laura         #+#    #+#                 */
/*   Updated: 2022/12/21 17:31:28 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	print_re(char *conv, int count_conv, unsigned long long original)
{
	char	c;
	int		count;

	count = count_conv -1;
	c = '-';
	if (original < 0)
	{
		count_conv++;
		if (write(1, &c, 1) == -1)
			return (-1);
	}
	while (count >= 0)
		if (write(1, &(conv[count--]), 1) == -1)
			return (-1);
	return (count_conv);
}

static int	check_base(char *base)
{
	int	count;
	int	mv_count;
	int	base_size;

	base_size = 0;
	count = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (base_size < 2)
		return (0);
	while (base[count] != '\0')
	{
		if (base[count] == '-' || base[count] == '+')
			return (0);
		mv_count = count + 1;
		while (base[mv_count] != '\0')
		{
			if (base[count] == base[mv_count++])
				return (0);
		}
		count++;
	}
	return (1);
}

int	ft_putnbr_ulong(unsigned long long nbr, char*base)
{
	unsigned long long	base_size;
	char				conv[64];
	int					count_conv;
	unsigned long long	leftover;
	unsigned long long	whatever;

	whatever = nbr;
	count_conv = 0;
	base_size = 0;
	if (check_base(base) == 0)
		return (0);
	if (whatever < 0)
		whatever *= (-1);
	while (base[base_size] != '\0')
		base_size++;
	while (whatever >= base_size)
	{
		leftover = whatever % base_size;
		whatever = whatever / base_size;
		conv[count_conv++] = base[leftover];
	}
	conv[count_conv++] = base[whatever];
	count_conv = print_re(conv, count_conv, nbr);
	return (count_conv);
}
