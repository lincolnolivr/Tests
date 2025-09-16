/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C01.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide-oli <lide-oli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:08:30 by lide-oli          #+#    #+#             */
/*   Updated: 2025/09/16 11:49:53 by lide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"

void	ft_putint(int	n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	if (n > 9)
		ft_putint(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ex00(void)
{
	int	ex00_int;
	int	*ex00_ptr;

	ex00_ptr = &ex00_int;

	ft_print("Ex00 (ft_ft):\n\n");
	ft_print("Antes: ");
	ft_putint(ex00_int);
	ft_print("\n");
	ft_ft(ex00_ptr);
	ft_print("Depois: ");
	ft_putint(ex00_int);
	ft_print("\n\n");
}

void	ex01(void)
{
	int ex01_int;
	int *ex01_ptr;
	int **ex01_ptr2;
	int ***ex01_ptr3;
	int ****ex01_ptr4;
	int *****ex01_ptr5;
	int ******ex01_ptr6;
	int *******ex01_ptr7;
	int ********ex01_ptr8;
	int *********ex01_ptr9;

	ex01_int = 0;
	ex01_ptr = &ex01_int;
	ex01_ptr2 = &ex01_ptr;
	ex01_ptr3 = &ex01_ptr2;
	ex01_ptr4 = &ex01_ptr3;
	ex01_ptr5 = &ex01_ptr4;
	ex01_ptr6 = &ex01_ptr5;
	ex01_ptr7 = &ex01_ptr6;
	ex01_ptr8 = &ex01_ptr7;
	ex01_ptr9 = &ex01_ptr8;

	ft_print("Ex01 (ft_ultimate_ft):\n\n");
	ft_print("Antes: ");
	ft_putint(ex01_int);
	ft_print("\n");
	ft_ultimate_ft(ex01_ptr9);
	ft_print("Depois: ");
	ft_putint(ex01_int);
	ft_print("\n\n");
}

void	ex02(void)
{
	int	ex02_a;
	int	ex02_b;
	int	*ex02_ptr_a;
	int	*ex02_ptr_b;

	ex02_a = 10;
	ex02_b = 5;
	ex02_ptr_a = &ex02_a;
	ex02_ptr_b = &ex02_b;

	ft_print("Ex02 (ft_swap):\n\n");
	ft_print("Antes A: ");
	ft_putint(ex02_a);
	ft_print(" e B: ");
	ft_putint(ex02_b);
	ft_print("\n");
	ft_swap(ex02_ptr_a, ex02_ptr_b);
	ft_print("Depois A: ");
	ft_putint(ex02_a);
	ft_print(" e B: ");
	ft_putint(ex02_b);
	ft_print("\n\n");
}

void	ex03(void)
{
	int	ex03_a;
	int	ex03_b;
	int	*ex03_ptr_div;
	int	*ex03_ptr_mod;

	ex03_a = 11;
	ex03_b = 5;
	ex03_ptr_div = &ex03_a;
	ex03_ptr_mod = &ex03_b;

	ft_print("Ex03 (ft_div_mod):\n\n");
	ft_print("Antes A: ");
	ft_putint(ex03_a);
	ft_print(" e B: ");
	ft_putint(ex03_b);
	ft_print("\n");
	ft_div_mod(ex03_a, ex03_b, ex03_ptr_div, ex03_ptr_mod);
	ft_print("Depois A: ");
	ft_putint(ex03_a);
	ft_print(" e B: ");
	ft_putint(ex03_b);
	ft_print("\n\n");
}

void	ex04(void)
{
	int	ex04_a;
	int	ex04_b;
	int	*ex04_ptr_div;
	int	*ex04_ptr_mod;

	ex04_a = 11;
	ex04_b = 5;
	ex04_ptr_div = &ex04_a;
	ex04_ptr_mod = &ex04_b;

	ft_print("Ex04 (ft_ultimate_div_mod):\n\n");
	ft_print("Antes A: ");
	ft_putint(ex04_a);
	ft_print(" e B: ");
	ft_putint(ex04_b);
	ft_print("\n");
	ft_ultimate_div_mod(ex04_ptr_div, ex04_ptr_mod);
	ft_print("Depois A: ");
	ft_putint(ex04_a);
	ft_print(" e B: ");
	ft_putint(ex04_b);
	ft_print("\n\n");
}

void	ex05(void)
{
	ft_print("Ex05 (ft_putstr):\n\n");
	ft_putstr("Hello World!");
	ft_print("\n\n");
}

void	ex06(void)
{
	ft_print("Ex06 (ft_putlen):\n\n");
	ft_print("Len (Hello World!): ");
	ft_putint(ft_strlen("Hello World!"));
}

int	main(void)
{
	ex00();
	ex01();
	ex02();
	ex03();
	ex04();
	ex05();
	ex06();
}
