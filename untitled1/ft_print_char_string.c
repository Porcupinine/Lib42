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

//
// Created by laura on 19/12/22.
//
#include <unistd.h>

void ft_char(char c, int *char_count)
{
	write(1, &c, 1);
	char_count++;
}

void ft_string(char *str, int *char_count)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_char(str[count], char_count);
	}
}
