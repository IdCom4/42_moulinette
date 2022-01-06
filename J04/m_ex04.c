/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:24:53 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 11:54:06 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_fibonacci(int nb);
void	ft_putnbr(int nb);

int		main(void)
{
	int i = -5;

	while (i <= 10)
	{
		ft_putnbr(ft_fibonacci(i));
		ft_putchar('\n');
		i++;
	}
	
	ft_putnbr(ft_fibonacci(27));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(42));
	ft_putchar('\n');
	return (0);
}
