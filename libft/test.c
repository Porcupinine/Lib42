/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 21:52:57 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/13 20:55:54 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\33[0m"

char string_test1 [] = "Does this work?";
char string_test2 [] = "Don't know...";
int n = 20;
char char_test = 'c';

void	test_is_alpha(void)
{
	printf("Testing ft_isalpha\n");
	int	fail;
	fail = 0;
	for(int i = 0; i<256; ++i)
	{
		int mine = ft_isalpha(i);
		int lib = isalpha(i);
		if((mine != 0 && lib == 0) || (mine == 0 && lib !=0))
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf(RED "Test ft_isapha failed!\n" RESET);
	}
	else
	{
		printf(GREEN "Test ft_isapha success!\n" RESET);
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
		if((mine != 0 && lib == 0)|| (mine == 0 && lib !=0))
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf(RED "Test ft_isascii failed!\n" RESET);
	}
	else
	{
		printf(GREEN "Test ft_isascii success!\n" RESET);
	}
}

void	test_is_alnum(void)
{
	printf("Testing ft_isalnum\n");
	int	fail;
	fail = 0;
	for(int i = 0; i<128; ++i)
	{
		int mine = ft_isalnum(i);
		int lib = isalnum(i);
		if((mine != 0 && lib == 0) || (mine == 0 && lib !=0))
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf(RED "Test ft_isalnum failed!\n" RESET);
	}
	else
	{
		printf(GREEN "Test ft_isalnum success!\n" RESET);
	}
}

void	test_is_digit(void)
{
	printf("Testing ft_isdigit\n");
	int	fail;
	fail = 0;
	for(int i = 0; i<1024; ++i)
	{
		int mine = ft_isdigit(i);
		int lib = isdigit(i);
		if((mine != 0 && lib == 0) || (mine == 0 && lib !=0))
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf(RED "Test ft_isdigit failed!\n" RESET);
	}
	else
	{
		printf(GREEN "Test ft_isdigit success!\n" RESET);
	}
}

void	test_is_print(void)
{
	printf("Testing ft_isprint\n");
	int	fail;
	fail = 0;
	for(int i = 0; i<1024; ++i)
	{
		int mine = ft_isprint(i);
		int lib = isprint(i);
		if((mine != 0 && lib == 0) || (mine == 0 && lib !=0))
		{
			printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
			fail = 1;
		}
	}
	if (fail == 1)
	{
		printf(RED "Test ft_isprint failed!\n" RESET);
	}
	else
	{
		printf(GREEN "Test ft_isprint success!\n" RESET);
	}
}

void	test_ft_strlen(void)
{
	char s[100] = "This is just a test";
	printf("Testing ft_strlen\n");
	if (ft_strlen(s) == strlen(s))
		printf(GREEN "Test ft_strlen sucsses!\n" RESET);
	else 
		{
			printf(RED "Test ft_strlen failed!\n" RESET);
		}
}

void	test_ft_memset(void)
{
	char smine[100] = "This is just a test \\o/";
	char slib[100] = "This is just a test \\o/";
	int n = 10;
	int c = 68;
	printf("Testing ft_memset\n");
	if (strcmp(ft_memset(smine,c,n), memset(slib,c,n)) == 0)
		printf(GREEN "Test ft_memset sucsses!\n" RESET);
	else
		printf(RED "Test ft_memset failed!\n" RESET);
}

void	sub_test_memove(char* mine, char* lib, char* d_min, char* d_lib, size_t n)
{
	char* res_mine = ft_memmove(d_min, mine, n);
	char* res_lib = memmove(d_lib, lib, n);
	printf("Testing ft_memmove\n");
	if (strcmp(res_mine, res_lib) == 0)
	{
		printf(GREEN "Test ft_memmove sucsses!\n" RESET);
	}
	else
	{
		printf(RED "Test ft_memmove failed!\n");
		printf("Mine: %s\n", mine);
		printf("Lib: %s\n", lib);
	}
}

void	test_ft_memmove(void)
{
	char sm[] = "This is just a test \\o/";
	char sl[] = "This is just a test \\o/";
	char dm[] = "whatever123456";
	char dl[] = "whatever123456";
	int n = 10;
	sub_test_memove(sm, sl, dm, dl, n);

	// test strings with overlap
	char sm2[] = "This is an anwesome string";
	char sl2[] = "This is an anwesome string";
	char* dm2 = sm2 + 5; // start on "is"
	char* dl2 = sl2 + 5;  // start on "is"
	sub_test_memove(sm2, sl2, dm2, dl2, n);

}

// void	test_ft_strlcpy(void)
// {
// 	char sm[100] = "This is a test!";
// 	char dm[100] = "!tset a is sihT";
// 	char sl[100] = "This is a test!";
// 	char dl[100] = "!tset a is sihT";
// 	int n = 15;

// 	printf("Testing ft_strlcpy\n");
// 	if (ft_strlcpy(dm, sm, n) == strlcpy(dl, sl, n))
// 		printf(GREEN "Test ft_strlcpy sucsses!\n" RESET);
// 	else
// 		printf(RED "Test ft_strlcpy failed!\n" RESET);
// }

void test_ft_toupper(void)
{
	int count = 0;
	// char str [] = "this is a test! Mar Que Carai\n";
	printf("testing ft_toupper\n");
	while (string_test1[count] != '\0')
	{
		printf("%c", string_test1[count]);
		string_test1[count] = ft_toupper(string_test1[count]);
		count++;
	}
		printf("%s\n", string_test1);
}

void test_ft_tolower(void)
{
	int count = 0;
	// char str [] = "this is a test! Mar Que Carai\n";
	printf("Testing ft_tolower\n");
	while (string_test1[count] != '\0')
	{
		printf("%c", string_test1[count]);
		string_test1[count] = ft_tolower(string_test1[count]);
		count++;
	}
		printf("%s\n", string_test1);
}

void test_ft_strchr(void)
{
	printf("Testing ft_strchr \n" );
	// char tes/÷te [] = "abcde÷÷";
	if (ft_strchr(string_test1, char_test) != strchr(string_test1, char_test))
		printf(RED "Test ft_strchr Failed!\n" RESET);
	else
		printf(GREEN "Test ft_strchr sucsses!\n" RESET);
	// printf("%p\n", ft_strchr(teste, '\0'));
	// printf("%p\n", strchr(teste, '\0'));
}

void test_ft_strrchr(void)
{
	printf("Testing ft_strrchr \n");
	// char teste [] = "testa";
	if (ft_strrchr(string_test1, char_test) != strrchr(string_test1, char_test))
		printf(RED "Test ft_strrchr Failed!\n"RESET);
	else 
		printf(GREEN "Test ft_strrchr sucsses!\n"RESET);
}

void test_ft_strncmp(void)
{
	printf("Testing ft_strncmp! \n");
	if (strncmp(string_test1, string_test2, n) != ft_strncmp(string_test1, string_test2, n))
	{
		printf(RED"Test ft_strncmp Failed!\n"RESET);
		printf("Mine: %d \n Lib: %d\n",ft_strncmp(string_test1, string_test2, n), strncmp(string_test1, string_test2, n));
	}
	else 
		printf(GREEN"Test ft_strncmp sucsses!\n"RESET);	
}

void test_ft_memcmp(void)
{
	printf("Testing ft_memcmp! \n");
	if (memcmp(string_test1, string_test2, n) != ft_memcmp(string_test1, string_test2, n))
	{
		printf(RED"Test ft_memcmp Failed!\n"RESET);
		printf("Mine: %d \n Lib: %d\n",ft_memcmp(string_test1, string_test2, n), memcmp(string_test1, string_test2, n));
	}
	else 
		printf(GREEN"Test ft_memcmp sucsses!\n"RESET);	
}

void test_ft_strlcat(void)
{
	printf("Testing ft_strlcat\n");
	char strdm [100] = "bo";
	char strsm [] = "funfou";
	char strdl [100] = "bo";
	char strsl [] = "funfou";
	
	if (ft_strlcat(strdm, strsm, 4) != strlcat(strdl, strsl, 4))
		printf(RED"Test ft_strlcat Failed!\n"RESET);
	else
		printf(GREEN"Test ft_strlcat sucsses!\n"RESET);	
	// printf("Mine: %zu\n Lib: %lu",ft_strlcat(strdm, strsm, 20), strlcat(strdl, strsl, 20));
}

int	main(void)
{
	test_is_alpha();
	test_is_ascii();
	test_is_alnum();
	test_is_digit();
	test_is_print();
	test_ft_memset();
	test_ft_strlen();
	// test_ft_strlcpy();
	test_ft_memmove();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memcmp();
	test_ft_strlcat();
}
