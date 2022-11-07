/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:18:21 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/11/06 01:00:44 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new
 *string, which is the result of the concatenation
 *of ’s1’ and ’s2’.
 * 
 * @param s1 first string
 * @param s2 second string
 * @return Returns the new string or NULL if the allocation fails. 
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Write a function that returns a line read from a file descriptor
 * 
 * @param fd 
 * @return Read line: correct behavior NULL: there is nothing else to 
 * read, or an error occurred
 */
char	*get_next_line(int fd);

/**
 * @brief The strdup() function allocates sufficient memory for a copy of the
 *string s1, does the copy, and returns a pointer to it.  The pointer may
 *subsequently be used as an argument to the function free(3).
 * 
 * @param s1 
 * @return If insufficient memory is available, NULL is returned and errno is 
 * set to ENOMEM 
 */
char	*ft_strdup(const char *s1);

/**
 * @brief strlcpy() and strlcat() functions copy and concatenate strings with
 *the same input parameters and output result as snprintf(3).  They are
 *designed to be safer, more consistent, and less error prone replacements
 *for the easily misused functions strncpy(3) and strncat(3).
 *strlcpy() and strlcat() take the full size of the destination buffer and
 *guarantee NUL-termination if there is room.  Note that room for the NUL
 *should be included in dstsize.
 *strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 *NUL-terminating the result if dstsize is not 0.
 * 
 * @param dst desteny
 * @param src source
 * @param dstsize how much to copy
 * @return If the src and dst strings overlap, the behavior is undefined.
 *return the total length of the string they tried to createmake  
 */
size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize);

/**
 * @brief The strlen() function calculates the length of the string pointed to 
 *by s, excluding the terminating null byte ('\0').
 * 
 * @param c 
 * @return The strlen() function returns the number of bytes in the string 
 *pointed to by s. 
 */
size_t	ft_strlen(const char *c);

#endif