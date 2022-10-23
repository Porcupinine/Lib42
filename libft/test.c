/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 21:52:57 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/23 19:04:30 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include <catch2/catch_all.hpp>

extern "C" {
#include "libft.h"
}

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\33[0m"

TEST_CASE("ft_memcpy")
{
	char str[] = "Testando se funciona";
	char destm[100] = {};
	char destl[100] = {};
	for (int i = 0; i < 50; ++i)
	{
		INFO("iteration = " << i << ", destl = " << destl << ", destm = " << destm);
		REQUIRE(memcpy(destl, str, i) == ft_memcpy(destm, str, i));
		REQUIRE(strcmp(destm, destl) == 0);

	}
	str[0] = '\0';
	destm[0] = 'a';
	destl[0] = 'a';
	INFO("destl = " << destl << ", destm = " << destm);
	REQUIRE(memcpy(destl, str, 10) == ft_memcpy(destm, str, 10));
	REQUIRE(strcmp(destm, destl) == 0);
}

TEST_CASE("ft_isalpha")
{
	int	fail;
	fail = 0;
	for(int i = 0; i < 256; ++i)
	{
		if (isalpha(i))
			REQUIRE(ft_isalpha(i));
		else 
			REQUIRE_FALSE(ft_isalpha(i));
	}
}

TEST_CASE("ft_isascii")
{
	for(int i = 0; i<1024; ++i)	
	{
		if (isascii(i))
			REQUIRE(ft_isascii(i));
		else 
			REQUIRE_FALSE(ft_isascii(i));
	}
}

TEST_CASE("ft_isalnum")
{
	for(int i = 0; i<256; ++i)	
	{
		if (isalnum(i))
			REQUIRE(ft_isalnum(i));
		else 
			REQUIRE_FALSE(ft_isalnum(i));
	}
}

TEST_CASE("ft_isdigit")
{
	for (int i = 0; i<1024; ++i)
	{
		if (isdigit(i))
			REQUIRE(ft_isdigit(i));
		else
			REQUIRE_FALSE(ft_isdigit(i));
	}
}

TEST_CASE("ft_isprint")
{
	for (int i = 0; i<1024; ++i)
	{
		if (isprint(i))
			REQUIRE(ft_isprint(i));
		else
			REQUIRE_FALSE(ft_isprint(i));
	}
}

TEST_CASE("ft_strlen")
{
	const char s[100] = "This is just a test";
	REQUIRE(ft_strlen(s) == strlen(s));
	const char str2[100] = "";
	REQUIRE(ft_strlen(s) == strlen(s));
}

TEST_CASE("ft_memset")
{
	char smine[100] = "This is just a test \\o/";
	char slib[100] = "This is just a test \\o/";
	int n = 10;
	int c = 68;
	REQUIRE(strcmp(ft_memset(smine,c,n), memset(slib,c,n)) == 0);
}

TEST_CASE("ft_memmove")
{
	char str[] = "Testando se funciona";
	char destm[100] = {};
	char destl[100] = {};
	for (int i = 0; i < 50; ++i)
	{
		INFO("iteration = " << i << ", destl = " << destl << ", destm = " << destm);
		REQUIRE(memmove(destl, str, i) == ft_memmove(destm, str, i));
		REQUIRE(strcmp(destm, destl) == 0);

	}
	str[0] = '\0';
	destm[0] = 'a';
	destl[0] = 'a';
	INFO("destl = " << destl << ", destm = " << destm);
	REQUIRE(memmove(destl, str, 10) == ft_memmove(destm, str, 10));
	REQUIRE(strcmp(destm, destl) == 0);
}

TEST_CASE("ft_strlcpy")
{
	char str[] = "Testando se funciona";
	char destm[100] = {};
	char destl[100] = {};
	for (int i = 0; i < 50; ++i)
	{
		INFO("iteration = " << i << ", destl = " << destl << ", destm = " << destm);
		REQUIRE(strlcpy(destl, str, i) == ft_strlcpy(destm, str, i));
		REQUIRE(strcmp(destm, destl) == 0);

	}
	str[0] = '\0';
	destm[0] = 'a';
	destl[0] = 'a';
	INFO("destl = " << destl << ", destm = " << destm);
	REQUIRE(strlcpy(destl, str, 10) == ft_strlcpy(destm, str, 10));
	REQUIRE(strcmp(destm, destl) == 0);
}

TEST_CASE("ft_toupper")
{
	char strm[] = "Testing To Upper Case";
	char strl[] = "Testing To Upper Case";
	int str_len = strlen(strl);
	for (int i = 0;  i < str_len; i++)
	{
		REQUIRE(toupper(strl[i]) == ft_toupper(strm[i]));
	}

}

TEST_CASE("ft_tolower")
{
	char strm[] = "Testing To LOWER Case";
	char strl[] = "Testing To LOWER Case";
	int str_len = strlen(strl);
	for (int i = 0;  i < str_len; i++)
	{
		REQUIRE(tolower(strl[i]) == ft_tolower(strm[i]));
	}
}

TEST_CASE("ft_strchr")
{
	char str[] = "Tripoullie";
	char search[] =  "abcdefgt  \n \f \r 35267";
	int search_len = strlen(search);
	for (int i = 0; i < search_len; i++)
	{
		REQUIRE(strchr(str, search[i]) == ft_strchr(str, search[i]));
	}
}

TEST_CASE("ft_strrchr")
{
	char str[] = "Tripoullie";
	char search[] =  "abcdefgt  \n \f \r 35267";
	int search_len = strlen(search);
	for (int i = 0; i < search_len; i++)
	{
		REQUIRE(strrchr(str, search[i]) == ft_strrchr(str, search[i]));
	}
}

TEST_CASE("ft_strncmp")
{
	char str1[] = "Testing if we can compare things";
	char str2[] = "Testing if we fail";
	for (int i = 0; i < 1024; i++)
	{
		REQUIRE(strncmp(str1, str2, i) == ft_strncmp(str1, str2, i));
	}
}

TEST_CASE("ft_memcmp")
{
	char str1[] = "Testing if we can compare things";
	char str2[] = "Testing if we fail";
	for (int i = 0; i < 1024; i++)
	{
		REQUIRE(memcmp(str1, str2, i) == ft_memcmp(str1, str2, i));
	}
}

TEST_CASE("ft_strlcat")
{
	char strdm [100] = "bo";
	char strsm [] = "funfou";
	char strdl [100] = "bo";
	char strsl [] = "funfou";
	for (int i =0; i < 1024; i++)
	{
		REQUIRE(strlcat(strdl, strsl, i) == ft_strlcat(strdm, strsm, i));
		REQUIRE(strcmp(strdm, strdl));
	}
}

void sub_compare_strnstr(const char* hay, const char* need, size_t num_bytes) 
{
	char* c1 = ft_strnstr(hay, need, num_bytes);
	char* c2 = strnstr(hay, need, num_bytes);
	if (c1 == c2)
		printf(GREEN"Test ft_strnstr sucsses!\n"RESET);
	else
	{
		printf(RED"Test ft_strnstrn Failed\n" RESET);
		printf("%p\n%p\n", c1, c2);
	}
}

void test_ft_strnstr(void)
{
	printf(RESET"Testing ft_strnstr!\n");
	sub_compare_strnstr("TESTE", "TE", 5);
	sub_compare_strnstr("TESTE", "ST", 5);
	sub_compare_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	sub_compare_strnstr("TESTE", "", 12);
	sub_compare_strnstr("", "TE", 2);
	sub_compare_strnstr("", "", 10);
}

void sub_compare_atoi(const char *nptr)
{
	int n1 = atoi(nptr);
	int n2 = ft_atoi(nptr);
	if (n1 == n2)
	{
		printf(GREEN"Test ft_atoi sucsses!\n"RESET);
		// printf("%s\n", nptr);
		// printf(GREEN"Mine: %d \nLib: %d\n" RESET, n2, n1);
	}
	else
	{
		printf("%s\n", nptr);
		printf(RED"Test ft_atoi Failed\n" RESET);
		printf(RED"Mine: %d \nLib: %d\n" RESET, n2, n1);
	}
}

void test_ft_atoi(void)
{
	printf("Testing ft_atoi!\n");
	sub_compare_atoi("    -+--+154996asdf");
	sub_compare_atoi("  +-45ede85");
	sub_compare_atoi("19865198efef54");
	sub_compare_atoi(" 1238");
	sub_compare_atoi("-47765846");
	sub_compare_atoi("--54984654");
	sub_compare_atoi("+6464");
	sub_compare_atoi("++54884");
	sub_compare_atoi(" -8797");
	sub_compare_atoi("8797");
	sub_compare_atoi(" +8797");
	sub_compare_atoi("-8797");
	sub_compare_atoi("         999");
	sub_compare_atoi("    97");
	sub_compare_atoi("    -797");
	sub_compare_atoi("    +8797");
	sub_compare_atoi("    +-35464");
	sub_compare_atoi("    -++3549");
	sub_compare_atoi("    -  697");
	sub_compare_atoi("    +--697");
	sub_compare_atoi("-");
	sub_compare_atoi("asfwfg");
	sub_compare_atoi("");
	sub_compare_atoi("-+48");
	sub_compare_atoi("+-48");
	sub_compare_atoi("-+348");
	sub_compare_atoi("+-348");
	sub_compare_atoi("-+549");

}

void sub_compare_strdup(const char *s1)
{
	char *n1 = strdup(s1);
	char *n2 = ft_strdup(s1);
	if (strcmp(n1, n2) == 0)
	{
		printf(GREEN"Test ft_strdup sucsses!\n"RESET);
		// printf("%s\n", nptr);
		// printf(GREEN"Mine: %d \nLib: %d\n" RESET, n2, n1);
	}
	else
	{
		printf("%s\n", s1);
		printf(RED"Test ft_strdup Failed\n" RESET);
		printf(RED"Mine: %s \nLib: %s\n" RESET, n2, n1);
	}
}

void	test_ft_strdup(void)
{
	sub_compare_strdup("TESTANDO");
	sub_compare_strdup("howf546  wervw4\n");
}

void	test_ft_substr(void)
{
	char *str = "0123456789";
	printf("Testing ft_substr!\n");
	char *res = ft_substr(str, 5, 3);
	if (strcmp(res, "567")) 
	{
		printf("Expected 567 and got %s\n", res);
		printf(RED"Test ft_substr fail!\n" RESET);
	}
		else 
	{
		printf(GREEN"Test ft_substr sucsses!\n"RESET);
	}
	free(res);
}

void test_ft_strjoin(void)
{
	// char *s1 = "testa ";
	// char *s2 = "Testando";
	char *s3 = "my favorite animal is";
    char *s4 = " ";
    char *s5 = "the nyancat";
	char *res_1 = ft_strjoin(s3, s4);
    char *res = ft_strjoin(res_1, s5);

	printf("Testing ft_strjoin!\n");
	if (strcmp(res, "my favorite animal is the nyancat")) 
	{
		printf("Expected my favorite animal is the nyancat and got %s\n", res);
		printf(RED"Test ft_strjoin fail!\n" RESET);
	} 
	else 
	{
		printf(GREEN"Test ft_strjoin sucsses!\n"RESET);
	}
	free(res_1);
	free(res);
}

void test_ft_strtrim(void)
{
	// char *s1 = "testabcdtest";
	// char *s2 = "tes";
	printf("Testing ft_strtrim!\n");
	// printf("s1: %s\ns2: %s\n", s1, s2);
	// printf("%s\n",ft_strtrim(s1, s2));
	printf("%s\n",ft_strtrim("   xxx   xxx", " x"));
}

void test_ft_putendl_fd(void)
{
	// ft_putendl_fd("Testando", 1);
	// ft_putendl_fd("a", 1);
	// ft_putendl_fd("s", 1);
	// ft_putendl_fd("d", 1);
}

void test_ft_split(void)
{
	char const str[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char c = ' ';
	char **test = ft_split(str, c);
	int count = 0;

	while (test[count] != NULL)
	{
		printf("%s\n", test[count]);
		count++;
	}
	count--;
	while(count != 0)
	{
		free(test[count]);
		count--;
	}
	free(test);

}

void test_ft_itoa(void)
{
	int n = 0;
	char *s = ft_itoa(n);
	printf("Testing ft_itoa\n");
	printf("%s\n", s);
}

void test_ft_putnbr_fd(void)
{
	printf("testing putnb\n");
	ft_putnbr_fd(10, 1);
		printf("\n");

}

TEST_CASE("libft", "testall")
{
	// test_is_ascii();
	// 	printf("\n");
	// test_is_alnum();
	// 	printf("\n");
	// test_is_digit();
	// 	printf("\n");
	// test_is_print();
	// 	printf("\n");
	// test_ft_memset();
	// 	printf("\n");
	// test_ft_strlen();
	// 	printf("\n");
	// test_ft_strlcpy();
	// 	printf("\n");
	// test_ft_memmove();
	// 	printf("\n");
	// test_ft_toupper();
	// 	printf("\n");
	// test_ft_tolower();
	// 	printf("\n");
	// test_ft_strchr();
	// 	printf("\n");
	// test_ft_strrchr();
	// 	printf("\n");
	// test_ft_strncmp();
	// 	printf("\n");
	// test_ft_memcmp();
	// 	printf("\n");
	// test_ft_strlcat();
	// 	printf("\n");
	// test_ft_memcpy();
	// 	printf("\n");
	// test_ft_strnstr();
	// 	printf("\n");
	// test_ft_atoi();
	// 	printf("\n");
	// // test_ft_calloc();
	// 	printf("\n");
	// test_ft_strdup();
	// 	printf("\n");
	// test_ft_substr();
	// 	printf("\n");
	// test_ft_strjoin();
	// 	printf("\n");
	// test_ft_strtrim();
	// 	printf("\n");
	// test_ft_putendl_fd();
	// 	printf("\n");
	// test_ft_split();
	// 	printf("\n");
	// test_ft_itoa();
	// 	printf("\n");
	// test_ft_putnbr_fd();
}

TEST_CASE("ft_lstadd_front")
{
	t_list	*head;
	t_list	*new_node;
	 char *content = "Teste";
	 char *content2 = "Teste head";

	head = ft_lstnew(content2);
	new_node = ft_lstnew(content);
	ft_lstadd_back(&head, new_node);
}
// int main4(void)
// {
// 	char str1 [11] = "abcdef";
// 	char str2 [4] = "xyz";

// 	strlcpy(str1, str2, 1000);
// 	printf("%s\n",str1);
// }

// int main(void)
// {
// 	int x = 10;
// 	int *ptr = &x;

// 	*ptr++;

// 	printf("pontei %d \n", *ptr);
// }