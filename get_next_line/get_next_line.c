/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:17:01 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/11/14 20:16:46 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that returns a line read from a file descriptor
 Repeated calls (e.g., using a loop) to your get_next_line() function should 
let you read the text file pointed to by the file descriptor, one line at a 
time.
• Your function should return the line that was read.
If there is nothing else to read or if an error occurred, it should return NULL.
• Make sure that your function works as expected both when reading a file and 
whenreading from the standard input.
• Please note that the returned line should include the terminating \n 
character, except if the end of file was reached and does not end with a \n 
character.
• Your header file get_next_line.h must at least contain the prototype of the
get_next_line() function.
• Add all the helper functions you need in the get_next_line_utils.c file.
• Because you will have to read files in get_next_line(), add this option to 
your compiler call: -D BUFFER_SIZE=n
It will define the buffer size for read().
The buffer size value will be modified by your peer-evaluators and the 
Moulinette in order to test your code.
• You will compile your code as follows (a buffer size of 42 is used as an 
example): cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
• We consider that get_next_line() has an undefined behavior if the file 
pointed to by the file descriptor changed since the last call whereas read() 
didn’t reach theend of file.
• We also consider that get_next_line() has an undefined behavior when reading
a binary file. However, you can implement a logical way to handle this 
behavior if you want to.
*/

#include <unistd.h>
#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 45
#endif

// static void	get_line(char *buff, char **lines, size_t *len)
// {
// 	size_t		start;
// 	// char		*temp;

// 	start = *len;
// 	while (buff[*len] != '\n' && buff[*len] != '\0')
// 		(*len)++;
// 	*lines = malloc((*len - start + 1) * sizeof(char));
// 	if (*lines == NULL)
// 		return ;
// 	// ft_strlcat(*lines, (buff + start), (*len +1));
// 	ft_strlcpy(*lines, &buff[start], (*len + 1));
// 	(*len)++;
// 	// *lines = ft_strjoin((const char *) *lines, (const char *) temp);
// 	// free(temp);
// }
//como pegar tamanho de lines

// char	*get_next_line(int fd)
// {
// 	char			buff[BUFFER_SIZE +1];
// 	char			*lines;
// 	static size_t	len;

// 	len = 0;
// 	read(fd, buff, BUFFER_SIZE);
// 	if (buff[len] != '\0')
// 		get_line(buff, &lines, &len);
// 	return (lines);
// }
// static void	get_line(char *buff, char **lines, size_t *len)
// {
// 	size_t		start;

// 	start = *len;
// 	while (buff[*len] != '\n' && buff[*len] != '\0')
// 		(*len)++;
// 	*lines = malloc((*len - start + 1) * sizeof(char));
// 	if (*lines == NULL)
// 		return ;
// 	ft_strlcpy(*lines, &buff[start], (*len + 1));
// 	(*len)++;
// }
static int	get_line(char *buff, char **lines, size_t buff_len, size_t *len)
{
	size_t	start;
	char	*temp;
	size_t	line_size;

	start = *len;
	while (*len < buff_len && buff[*len] != '\n' && buff[*len] != '\0')
		(*len)++;
	line_size = *len - start;
	if (*lines == NULL)
	{
		if (*len == buff_len) {
			*lines = malloc((line_size +1) * sizeof(char));
			if (*lines == NULL)
				return (0);
			ft_strlcpy(*lines, buff + start, line_size);
			(*lines)[line_size] = '\0';
			(*len)++;
		}
		else if (buff[*len] == '\n' || buff[*len] == '\0')
		{
			if (buff[*len] == '\n') ++line_size;
			*lines = malloc((line_size + 1) * sizeof(char));
			if (*lines == NULL)
				return (0);
			ft_strlcpy(*lines, buff + start, line_size);
			(*lines)[line_size] = '\0';
			(*len)++;
			return (2);
		}
	}
	else
	{
		temp = *lines;
		if(*len < buff_len)
		{
			(*lines) = ft_strjoin((*lines), &(buff[start]), line_size);
			free(temp);
		}
		if (buff[*len] == '\n' || buff[*len] == '\0')
		{
			if (buff[*len] == '\n') ++line_size;
			(*lines) = ft_strjoin((*lines), &(buff[start]), line_size);
//			(*lines)[line_size] = '\0';
			(*len)++;
			free(temp);
			return (2);
		}
	}
	return (3);
}

char	*get_next_line(int fd)

{
	static char		buff[BUFFER_SIZE];
	char			*lines;
	static size_t	len = 0;
	static size_t	buff_len = 0;
	int				ret;

	lines = NULL;
	ret = 0;
	while (1)
	{
		if (len == buff_len)
		{
			buff_len = read(fd, buff, BUFFER_SIZE);
			len = 0;
		}
		if (buff_len > 0)
			ret = get_line(buff, &lines, buff_len, &len);
		if (ret == 2)
			break ;
	}
//	if (ret == 1)
//		lines[len + 1] = '\0';
//	else
//	{
//		lines[len + 1] = '\n';
//		//len nao necessariamente leva em conta oque tinha no lines bring this shit up
//		len++;
//	}
	return (lines);
}
