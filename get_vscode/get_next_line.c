/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:17:01 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/11/14 22:26:02 by laura         ########   odam.nl         */
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

char	*get_next_line(int fd)
{
	char			buff[BUFFER_SIZE +1];
	char			*lines;
	static size_t	len = 0;
	size_t			start;
	static char		*stack = NULL;

	start = len;
	read(fd, buff, BUFFER_SIZE);
	if (stack == NULL)
		stack = buff;
	else
		stack = ft_strjoin(stack, buff);
	if (stack[len] != '\0')
	{
		while (stack[len] != '\n' && stack[len] != '\0')
			(len)++;
		lines = malloc((len - start + 1) * sizeof(char));
		if (lines == NULL)
			return (NULL);
		ft_strlcpy(lines, (buff + start), (len - start + 1));
		// len++;
	}
	return (lines);
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*lines;

	fd = open("testfile.txt", O_RDONLY);
	lines = get_next_line(fd);
	printf("%s\n", lines);
	free(lines);
	lines = get_next_line(fd);
	printf("%s\n", lines);
	free(lines);
	lines = get_next_line(fd);
	printf("%s\n", lines);
	close(fd);
	free(lines);
	return (1);
}
