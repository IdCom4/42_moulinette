/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:52:56 by idcornua          #+#    #+#             */
/*   Updated: 2019/02/06 12:03:08 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	number = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + 48);
}

void	ft_print_words_table(char **tab)
{
	int index_tab;

	index_tab = 0;
	while (tab[index_tab])
	{
		ft_putstr(tab[index_tab]);
		ft_putchar('\n');
		index_tab++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int index;

	index = 0;
	while (par[index].str)
	{
		ft_putstr(par[index].str);
		ft_putchar('\n');
		ft_putnbr(par[index].size_param);
		ft_putchar('\n');
		ft_print_words_table(par[index].tab);
		index++;
	}
}
