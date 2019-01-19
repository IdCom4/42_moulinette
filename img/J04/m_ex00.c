/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:12:27 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 11:30:54 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_iterative_factorial(int nb);
void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(ft_iterative_factorial(-5));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(-2));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(0));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(1));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(2));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(5));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(11));
	ft_putchar('\n');
	return (0);
}
