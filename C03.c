/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide-oli <lide-oli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:24:10 by lide-oli          #+#    #+#             */
/*   Updated: 2025/09/16 10:55:38 by lide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

void	ex00(void)
{
	printf("Ex00 (strcmp):\n\n");
	printf("My Function:\n");
	printf("ABC e ABC: %d\n", ft_strcmp("ABC", "ABC"));
	printf("ABC e AB: %d\n", ft_strcmp("ABC", "AB"));
	printf("ABA e ABZ: %d\n\n", ft_strcmp("ABA", "ABZ"));

	printf("Original Function:\n");
	printf("ABC e ABC: %d\n", strcmp("ABC", "ABC"));
	printf("ABC e AB: %d\n", strcmp("ABC", "AB"));
	printf("ABA e ABZ: %d\n\n", strcmp("ABA", "ABZ"));
}

void	ex01(void)
{
	printf("Ex01 (strncmp):\n\n");
	printf("My Function:\n\n");
	printf("Pera e Abacaxi: %d\n", ft_strncmp("Pera", "Abacaxi", 5));
	printf("Abacate e Abacate: %d\n", ft_strncmp("Abacate", "Abacate", 3));
	printf("Chocolate e Pimenta: %d\n\n", ft_strncmp("Chocolate", "Pimenta", 1));

	printf("Original Function:\n\n");
	printf("Pera e Abacaxi: %d\n", strncmp("Pera", "Abacaxi", 5));
	printf("Abacate e Abacate: %d\n", strncmp("Abacate", "Abacate", 3));
	printf("Chocolate e Pimenta: %d\n\n", strncmp("Chocolate", "Pimenta", 1));
}

void	ex02(void)
{
	char	dest[] = "Hello ";
	char	dest2[] = "Hello ";
	char	src[] = "World!";
	char	src2[] = "World!";

	printf("Ex02 (ft_strcat):\n\n");
	printf("My Function:\n");
	printf("Antes: %s\n", dest);
	ft_strcat(dest, src);
	printf("Depois: %s\n\n", dest);

	printf("Original Function:\n");
	printf("Antes: %s\n", dest2);
	strcat(dest2, src2);
	printf("Depois: %s\n\n", dest2);
}

void	ex03(void)
{
	char	dest[] = "Hello ";
	char	dest2[] = "Hello ";
	char	src[] = "World!";
	char	src2[] = "World!";

	printf("Ex03 (ft_strncat):\n\n");
	printf("My Function:\n");
	printf("Antes: %s\n", dest);
	ft_strncat(dest, src, 3);
	printf("Depois: %s\n\n", dest);

	printf("Original Function:\n");
	printf("Antes: %s\n", dest2);
	strncat(dest2, src2, 3);
	printf("Depois: %s\n\n", dest2);
}

void	ex04(void)
{
	char	to_find[] = "ABC";
	char	str[] = "AAAAAABCSS";

	printf("Ex04 (ft_strstr):\n\n");
	printf("My Function: %s\n", ft_strstr(str, to_find));
	printf("Original Function: %s\n\n", strstr(str, to_find));
}

void	ex05(void)
{
	char	dest[] = "Hello ";
	char	dest2[] = "Hello ";
	char	src[] = "World!";
	char	src2[] = "World!";
	int	res;
	int	res2;

	printf("Ex05 (ft_strlcat):\n\n");
	printf("My Function:\n");
	printf("Antes: %s\n", dest);
	res = ft_strlcat(dest, src, 3);
	printf("Depois: %s\n", dest);
	printf("Len: %d\n\n", res);

	printf("Original Function:\n");
	printf("Antes: %s\n", dest2);
	res2 = strlcat(dest2, src2, 3);
	printf("Depois: %s\n", dest2);
	printf("Len: %d\n", res2); 
}

int	main(void)
{
	ex00();
	ex01();
	ex02();
	ex03();
	ex04();
	ex05();
	return (0);
}
