/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:36:41 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:36:42 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putnbr(int nb);

int		main(void)
{
	int a = 2;
	int b = 4;

	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}