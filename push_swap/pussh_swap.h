/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pussh_swap.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 13:47:54 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/01/23 13:47:54 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#ifndef PUSH_SWAP_PUSSH_SWAP_H
#define PUSH_SWAP_PUSSH_SWAP_H

# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif //PUSH_SWAP_PUSSH_SWAP_H
