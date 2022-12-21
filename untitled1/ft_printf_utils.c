/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 08:51:56 by laura         #+#    #+#                 */
/*   Updated: 2022/12/21 08:51:56 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
    return (1);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

char	*ft_strchr(const char *s, int c)
{
    int		count;
    int		len;
    char	*alias;
    char	compare_char;

    compare_char = c;
    count = 0;
    alias = (char *) s;
    len = ft_strlen(s);
    while (count < (len + 1))
    {
        if (alias[count] != compare_char)
            count++;
        else if (alias[count] == compare_char)
            return (alias + count);
    }
    return (0);
}

char	*ft_strdup(const char *s1)
{
    char	*dup;
    int		count;

    count = 0;
    dup = malloc((ft_strlen(s1) + 1) * (sizeof(char)));
    if (dup == NULL)
        return (NULL);
    while (s1[count] != '\0')
    {
        dup[count] = s1[count];
        count++;
    }
    dup[count] = '\0';
    return (dup);
}

