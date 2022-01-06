/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:44:58 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 12:07:00 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(ft_eight_queens_puzzle());
	ft_putchar('\n');
	return (0);
}
