/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:23:41 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 11:48:31 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_recursive_power(int nb, int power);
void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(ft_recursive_power(3, -5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(3, -2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(3, 0));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(3, 1));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(3, 2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(3, 5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(3, 11));
	ft_putchar('\n');

	ft_putnbr(ft_recursive_power(-7, -5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-7, -2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-7, 0));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-7, 1));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-7, 2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-7, 5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-7, 11));
	ft_putchar('\n');

	ft_putnbr(ft_recursive_power(7, -5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(7, -2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(7, 0));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(7, 1));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(7, 2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(7, 5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(7, 11));
	ft_putchar('\n');
	return (0);
}
