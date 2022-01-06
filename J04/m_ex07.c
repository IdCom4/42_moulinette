/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:41:58 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 12:03:07 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_find_next_prime(int nb);
void	ft_putnbr(int nb);

int		main(void)
{
	int i = -5;

	while (i <= 100)
	{
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
		i++;
	}
	
	i = 21000;
	while (i <= 21100)
	{
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
		i++;
	}
		
	ft_putnbr(ft_find_next_prime(2147483647));
	ft_putchar('\n');
	return (0);
}
