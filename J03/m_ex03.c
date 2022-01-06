/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:39:09 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:39:10 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int nb);

int		main(void)
{
	int a = 127;
	int b = 35;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	ft_putnbr(*div);
	ft_putchar('\n');
	ft_putnbr(*mod);
	ft_putchar('\n');
	return (0);
}