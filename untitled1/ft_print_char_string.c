/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_char_string.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 16:23:18 by laura         #+#    #+#                 */
/*   Updated: 2022/12/19 16:23:18 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_char(int c)
{
	write(1, &c, 1);
    return (1);
}

int ft_string(char *str)
{
	int char_count;

    char_count = 0;
	while (str[char_count] != '\0')
	{
		ft_char(str[char_count]);
		char_count++;
	}
    return (char_count);
}

