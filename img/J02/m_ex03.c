/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:09:45 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 16:09:46 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_is_negative(int n);

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

void	ft_putnbr(int nbr)
{
	unsigned int number;

	number = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		number = nbr * -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(number + 48);
	}
}

int		main(void)
{
	int i = -10;

	while (i <= 10)
	{
		ft_putnbr(i);
		ft_putstr(" = ");
		ft_is_negative(i);
		ft_putchar('\n');
		i++;
	}
	ft_putnbr(-2147483648);
	ft_putstr(" = ");
	ft_is_negative(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putstr(" = ");
	ft_is_negative(2147483647);
	ft_putchar('\n');
	return (0);
}
