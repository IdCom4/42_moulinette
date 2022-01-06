/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:12:48 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 16:12:51 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

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

int		main(void)
{
	int i = -10;

	while (i <= 10)
	{
		ft_putchar(' ');
		ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	ft_putchar(' ');
	ft_putnbr(-5783);
	ft_putchar('\n');

	ft_putchar(' ');
	ft_putnbr(39641);
	ft_putchar('\n');

	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}