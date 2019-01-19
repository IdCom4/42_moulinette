/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:35:02 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 12:01:02 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_is_prime(int nb);
void	ft_putnbr(int nb);

int		main(void)
{
	int i = -5;

	while (i <= 100)
	{
		ft_putnbr(ft_is_prime(i));
		ft_putchar('\n');
		i++;
	}
	
	i = 21000;
	while (i <= 21100)
	{
		ft_putnbr(ft_is_prime(i));
		ft_putchar('\n');
		i++;
	}
		
	ft_putnbr(ft_is_prime(2147483647));
	ft_putchar('\n');
	return (0);
}
