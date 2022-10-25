/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 16:33:20 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/25 18:33:34 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
return new node*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_item;

	new_item = ft_calloc(1, sizeof(t_list));
	if (new_item == NULL)
		return (NULL);
	new_item->content = content;
	new_item->next = NULL;
	return (new_item);
}
