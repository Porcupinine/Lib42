/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pussh_swap.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 13:48:05 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/01/23 13:48:05 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Turn Makefile, *.h, *.c
 * read, write, malloc, free, exit.
 * ft_printf and any equivalent YOU coded libft
 * list -> first item == smallest number.
 * numbers can be positive or negative.
 * Organize stack a with help of stack b with the least amount of movements possible.
 * store instructions log separated by \n.
 * in case somethng goes wrong, print Error\n.
 * some arguments aren’t integers, some arguments are
 * bigger than an integer and/or there are duplicates.
 * sorting rules
 *      sa/sb/ss -> swap first two elements
 *      pa/pb -> take element of the top ofe one stack and place on the top of the other
 *      ra/rb/rr -> shift up 1 element
 *      rra/rrb/rrr -> shift down one element
 */
#include "pussh_swap.h"
