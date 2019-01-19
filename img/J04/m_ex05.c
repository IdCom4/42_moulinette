/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:29:55 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 11:56:39 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_sqrt(int nb);
void	ft_putnbr(int nb);

int		main(void)
{
	int i = -5;

	while (i <= 100)
	{
		ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
		i++;
	}
	
	ft_putnbr(ft_sqrt(21609));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(2147483647));
	ft_putchar('\n');
	return (0);
}
