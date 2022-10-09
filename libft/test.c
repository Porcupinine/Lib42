/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 21:52:57 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/09 21:52:58 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	test_is_alpha(void)
{
	printf("Testing ft_isalpha\n");
	int	fail;
	fail = 0;
	for(int i = 0; i<256; ++i)
	{
		int mine = ft_isalpha(i);
		int lib = isalpha(i);
		if(mine != lib)
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf("Test ft_isapha failed!\n");
	}
	else
	{
		printf("Test ft_isapha success!\n");
	}
}

void	test_is_ascii(void)
{
	printf("Testing ft_isascii\n");
	int	fail;
	fail = 0;
	for(int i = 0; i<1024; ++i)
	{
		int mine = ft_isascii(i);
		int lib = isascii(i);
		if(mine != lib)
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf("Test ft_isascii failed!\n");
	}
	else
	{
		printf("Test ft_isapha success!\n");
	}
}

int	main(void)
{
	test_is_alpha();
	test_is_ascii();
}
