/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 14:34:30 by laura         #+#    #+#                 */
/*   Updated: 2022/12/19 14:34:30 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main() {

    char c = 'a';
    char *s = "string";
    int i = 10000;
    void *p;
    int d = 9548;
    int n_d = -88487;
    unsigned int u = 45;
    int printf_value = 0;
    int ft_prntf_value = 0;
    int dif;

    printf_value = printf("%\0a\n");
    ft_prntf_value = ft_printf("%\0a\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("%%\0a\n");
    ft_prntf_value = ft_printf("%%\0a\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("%s\0a", "funfa\n");
    ft_prntf_value = ft_printf("%s\0a", "funfa\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Hello, World!\n");
    ft_prntf_value = ft_printf("Hello, World!\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------PERCENTAGE------------------------------------------

    printf_value = printf("Testando 2 porcentagem %%\n");
    ft_prntf_value = ft_printf("Testando 2 porcentagem %%\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando 3 porcentagem %%%\n");
    ft_prntf_value = ft_printf("Testando 3 porcentagem %%%\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando 4 porcentagem %%%%\n");
    ft_prntf_value = ft_printf("Testando 4 porcentagem %%%%\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando 5 porcentagem %%%%%\n");
    ft_prntf_value = ft_printf("Testando 5 porcentagem %%%%%\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando 7 porcentagem %%%%%%%\n");
    ft_prntf_value = ft_printf("Testando 7 porcentagem %%%%%%%\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------CHAR-------------------------------------------------

    printf_value = printf("Testando char %c\n", c);
    ft_prntf_value = ft_printf("Testando char %c\n", c);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------STRING-------------------------------------------------

    printf_value = printf("Testando string %s\n", s);
    ft_prntf_value = ft_printf("Testando string %s\n", s);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando string vazia %s\n", NULL);
    ft_prntf_value = ft_printf("Testando string vazia %s\n", NULL);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------DECIMAL-------------------------------------------------

    printf_value = printf("Testando decimal %d\n", d);
    ft_prntf_value = ft_printf("Testando decimal %d\n", d);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando decimal %d\n", n_d);
    ft_prntf_value = ft_printf("Testando decimal %d\n", n_d);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------ADDRESS-------------------------------------------------

    printf_value = printf("Testando endereço %p\n", s);
    ft_prntf_value = ft_printf("Testando endereço %p\n", s);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando endereço %p\n", ULONG_MAX);
    ft_prntf_value = ft_printf("Testando endereço %p\n", ULONG_MAX);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------LOW HEXA-------------------------------------------------

    printf_value = printf("Testando hexa %x \n", d);
    ft_prntf_value = ft_printf("Testando hexa %x \n", d);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando hexa %x \n", ULONG_MAX);
    ft_prntf_value = ft_printf("Testando hexa %x \n", ULONG_MAX);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------UPPER HEXA-------------------------------------------------

    printf_value = printf("Testando HEXA %X\n", d);
    ft_prntf_value = ft_printf("Testando HEXA %X\n", d);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------UNSIGNED INT-------------------------------------------------

    printf_value = printf("Testando unssigned int %u\n", u);
    ft_prntf_value = ft_printf("Testando unssigned int %u\n", u);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("Testando unssigned int %u\n", LONG_MAX);
    ft_prntf_value = ft_printf("Testando unssigned int %u\n", LONG_MAX);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

// ------------------MISC-------------------------------------------------

    printf_value = printf("%k\n");
    ft_prntf_value =  ft_printf("%k\n");
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);

    printf_value = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    ft_prntf_value =  ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    dif = printf_value - ft_prntf_value;
    printf("printf= %d ft_printf= %d  dif= %d\n\n", printf_value, ft_prntf_value, dif);



    return 0;
}
