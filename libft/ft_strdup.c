/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:46:12 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/17 14:19:27 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mall;
	int		count;

	count = 0;
	mall = malloc(ft_strlen(mall) * (sizeof(char)));
	if (mall == NULL)
		return (NULL);
	while (mall[count] != '\0')
	{
		mall[count] = s1[count];
		count++;
	}
	return (mall);
}
