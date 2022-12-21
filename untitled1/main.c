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

int main() {

	char c = 'a';
	char *s = "string";
	int i = 10000;
	void *p;
	int d = 9;
	unsigned int u = 45;


	printf("Hello, World!\n");
	ft_printf("Hello, ft_World!\n");

	printf("Testando porcentagem %%\n");
	ft_printf("Testando ft_porcentagem %%\n");

	printf("Testando char %c\n", c);
//	ft_printf("Testando char %c\n", c);

	printf("Testando string %s\n", s);
	ft_printf("Testando ft_string %s\n", s);

	printf("Testando decimal %d\n", d);
	ft_printf("Testando ft_decimal %d\n", d);

	printf("Testando endereço %p\n", d);
//	ft_printf("Testando endereço %p\n", d);

	printf("Testando hexa %h\n", d);
	ft_printf("Testando hexa %h\n", d);

	printf("Testando HEXA %H\n", d);
	ft_printf("Testando HEXA %H\n", d);

	return 0;
}
