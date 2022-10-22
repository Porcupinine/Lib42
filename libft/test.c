/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lplacerdadesign@gmail.com>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 21:52:57 by lpraca-l      #+#    #+#                 */
/*   Updated: 2022/10/22 21:23:09 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "libft.h"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\33[0m"

char* g_string_test1;
char* g_string_test2;
char* g_string_test11;
char* g_string_test22;
char* g_haystack;
char* g_needle;
int g_n = 0;
char g_char_test = 'c';

void init_test_data() 
{
	g_string_test1 = malloc(100);
	strcpy(g_string_test1, "Does this work?");
	g_string_test2 = malloc(100);
	strcpy(g_string_test2, "Don't know...");
	g_string_test11 = malloc(100);
	strcpy(g_string_test11, "Does this work?");
	g_string_test22 = malloc(100);
	strcpy(g_string_test22, "Don't know...");
	g_haystack = malloc(100);
	strcpy(g_haystack, "Dog cat horse cow sheep");
	g_needle = malloc(100);
	strcpy(g_needle, "cat");

}

void clear_test_data()
{
	free(g_string_test1);
	free(g_string_test2);
	free(g_string_test11);
	free(g_string_test22);
	free(g_haystack);
	free(g_needle);
}

void	sub_test_memcpy (char* mine, char* lib, char* d_min, char* d_lib, size_t n)
{
	char* res_mine = ft_memcpy(d_min, mine, n);
	char* res_lib = memcpy(d_lib, lib, n);
	printf("Testing ft_memcpy\n");
	if (strcmp(res_mine, res_lib) == 0)
	{
		printf(GREEN "Test ft_memcpy sucsses!\n" RESET);
	}
	else
	{
		printf(RED "Test ft_memcpy failed!\n" RESET);
		printf("Mine: %s\n", mine);
		printf("Lib: %s\n", lib);
	}
}

void	test_ft_memcpy(void)
{
	char sm[] = "This is just a test \\o/";
	char sl[] = "This is just a test \\o/";
	char dm[] = "whatever123456";
	char dl[] = "whatever123456";
	int n = 8;
	sub_test_memcpy(sm, sl, dm, dl, n);

	// test strings with overlap
	char sm2[] = "This is an anwesome string";
	char sl2[] = "This is an anwesome string";
	char* dm2 = sm2 + 5; // start on "is"
	char* dl2 = sl2 + 5;  // start on "is"
	sub_test_memcpy(sm2, sl2, dm2, dl2, n);

	char sm3[] = "rem ipssum dolor sit a";
	char sl3[] = "rem ipssum dolor sit a";
	char* dm3 = sm3 + 5; // start on "is"
	char* dl3 = sl3 + 5;  // start on "is"
	sub_test_memcpy(sm3, sl3, dm3, dl3, n);
}

void	test_is_alpha(void)
{
	printf("Testing ft_isalpha\n");
	int	fail;
	fail = 0;
	for(int i = 0; i < 256; ++i)
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
	// int	fail;
	// fail = 0;
	// for(int i = 0; i<128; ++i)
	// {
	// 	int mine = ft_isalnum(i);
	// 	int lib = isalnum(i);
	// 	if((mine != 0 && lib == 0) || (mine == 0 && lib !=0))
	// 	{
	// 		printf("Not matching! Input: %d, mine: %d, lib: %d\n", i, mine, lib);
	// 		fail = 1;
	// 	}
	// }
	// if (fail == 1)
	// {
	// 	printf(RED "Test ft_isalnum failed!\n" RESET);
	// }
	// else
	// {
	// 	printf(GREEN "Test ft_isalnum success!\n" RESET);
	// }
	int i = '0';
    while (i <= '9')
    {
        printf("%d", ft_isalnum(i));
        i++;
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
	int n = 8;
	sub_test_memove(sm, sl, dm, dl, n);

	// test strings with overlap
	char sm2[] = "This is an anwesome string";
	char sl2[] = "This is an anwesome string";
	char* dm2 = sm2 + 5; // start on "is"
	char* dl2 = sl2 + 5;  // start on "is"
	sub_test_memove(sm2, sl2, dm2, dl2, n);

	char sm3[] = "rem ipssum dolor sit a";
	char sl3[] = "rem ipssum dolor sit a";
	char* dm3 = sm3 + 5; // start on "is"
	char* dl3 = sl3 + 5;  // start on "is"
	sub_test_memove(sm3, sl3, dm3, dl3, n);
}

void	test_ft_strlcpy(void)
{
	init_test_data();
	printf("Testing ft_strlcpy\n");
	if (ft_strlcpy(g_string_test1, g_string_test2, g_n) == strlcpy(g_string_test11, g_string_test22, g_n))
		printf(GREEN "Test ft_strlcpy sucsses!\n" RESET);
	else
	{
		printf(RED "Test ft_strlcpy failed!\n" RESET);
		printf("Mine: %ld \nLib : %ld \n",ft_strlcpy(g_string_test1, g_string_test2, g_n),strlcpy(g_string_test11, g_string_test22, g_n));
	}
	clear_test_data();
}

void test_ft_toupper(void)
{
	init_test_data();
	int count = 0;
	// char str [] = "this is a test! Mar Que Carai\n";
	printf("testing ft_toupper\n");
	while (g_string_test1[count] != '\0')
	{
		printf("%c", g_string_test1[count]);
		g_string_test1[count] = ft_toupper(g_string_test1[count]);
		count++;
	}
		printf("%s\n", g_string_test1);
	clear_test_data();
}

void test_ft_tolower(void)
{
	init_test_data();
	int count = 0;
	// char str [] = "this is a test! Mar Que Carai\n";
	printf("Testing ft_tolower\n");
	while (g_string_test1[count] != '\0')
	{
		printf("%c", g_string_test1[count]);
		g_string_test1[count] = ft_tolower(g_string_test1[count]);
		count++;
	}
		printf("%s\n", g_string_test1);
	clear_test_data();
}

void test_ft_strchr(void)
{
	init_test_data();
	char s[] = "tripouille";
	printf("Testing ft_strchr \n" );
	if (ft_strchr(s, 't' + 256) != strchr(s, 't' + 256))
		{
			printf(RED "Test ft_strchr Failed!\n" RESET);
		printf("mine: %p\nlib: %s\n", ft_strchr(s, 't' + 256), strchr(s, 't' + 256) );}
	else
		printf(GREEN "Test ft_strchr sucsses!\n" RESET);
	// printf("%p\n", ft_strchr(teste, '\0'));
	// printf("%p\n", strchr(teste, '\0'));
	clear_test_data();
}

void test_ft_strrchr(void)
{
	init_test_data();
	printf("Testing ft_strrchr \n");
	// char teste [] = "testa";
	if (ft_strrchr(g_string_test1, '\0') != strrchr(g_string_test1, '\0'))
		printf(RED "Test ft_strrchr Failed!\n"RESET);
	else 
		printf(GREEN "Test ft_strrchr sucsses!\n"RESET);
	clear_test_data();
}

void test_ft_strncmp(void)
{
	init_test_data();
	printf("Testing ft_strncmp! \n");
	if (strncmp(g_string_test1, g_string_test2, g_n) != ft_strncmp(g_string_test1, g_string_test2, g_n))
	{
		printf(RED"Test ft_strncmp Failed!\n"RESET);
		printf("Mine: %d \nLib: %d\n",ft_strncmp(g_string_test1, g_string_test2, g_n), strncmp(g_string_test1, g_string_test2, g_n));
	}
	else 
		printf(GREEN"Test ft_strncmp sucsses!\n"RESET);	
	clear_test_data();
}

void test_ft_memcmp(void)
{
	printf("Testing ft_memcmp! \n");
	init_test_data();
	// printf("String 1: %s\n", g_string_test1);
	// printf("String 2 : %s\n", g_string_test2);
	if (memcmp(g_string_test1, g_string_test2, g_n) != ft_memcmp(g_string_test1, g_string_test2, g_n))
	{
		printf(RED"Test ft_memcmp Failed!\n"RESET);
		printf("Mine: %d \n Lib: %d\n",ft_memcmp(g_string_test1, g_string_test2, g_n), memcmp(g_string_test1, g_string_test2, g_n));
	}
	else 
		printf(GREEN"Test ft_memcmp sucsses!\n"RESET);
	clear_test_data();
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

int	main(void)
{
	test_is_alpha();
		printf("\n");
	test_is_ascii();
		printf("\n");
	test_is_alnum();
		printf("\n");
	test_is_digit();
		printf("\n");
	test_is_print();
		printf("\n");
	test_ft_memset();
		printf("\n");
	test_ft_strlen();
		printf("\n");
	test_ft_strlcpy();
		printf("\n");
	test_ft_memmove();
		printf("\n");
	test_ft_toupper();
		printf("\n");
	test_ft_tolower();
		printf("\n");
	test_ft_strchr();
		printf("\n");
	test_ft_strrchr();
		printf("\n");
	test_ft_strncmp();
		printf("\n");
	test_ft_memcmp();
		printf("\n");
	test_ft_strlcat();
		printf("\n");
	test_ft_memcpy();
		printf("\n");
	test_ft_strnstr();
		printf("\n");
	test_ft_atoi();
		printf("\n");
	// test_ft_calloc();
		printf("\n");
	test_ft_strdup();
		printf("\n");
	test_ft_substr();
		printf("\n");
	test_ft_strjoin();
		printf("\n");
	test_ft_strtrim();
		printf("\n");
	test_ft_putendl_fd();
		printf("\n");
	test_ft_split();
		printf("\n");
	test_ft_itoa();
		printf("\n");
	test_ft_putnbr_fd();
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