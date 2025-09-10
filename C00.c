/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide-oli <lide-oli@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:32:06 by lide-oli          #+#    #+#             */
/*   Updated: 2025/09/10 08:42:00 by lide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	ft_print("Exercicio 00:\n");
	ft_putchar('L');
	ft_print("\n\nExercicio 01:\n");
	ft_print_alphabet();
	ft_print("\n\nExercicio 02:\n");
	ft_print_reverse_alphabet();
	ft_print("\n\nExercicio 03:\n");
	ft_print_numbers();
	ft_print("\n\nExercicio 04:\n");
	ft_print("Teste 42: ");
	ft_is_negative(42);
	write(1, "\n", 1);
	ft_print("Teste -5: ");
	ft_is_negative(-5);
	write(1, "\n", 1);
	ft_print("Teste 0: ");
	ft_is_negative(0);
	write(1, "\n", 1);
}



