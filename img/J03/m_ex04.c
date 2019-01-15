/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:49:31 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:49:33 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putnbr(int nb);

int		main(void)
{
	int a = 127;
	int b = 35;
	int *div = &a;
	int *mod = &b;

	ft_ultimate_div_mod(div, mod);
	ft_putnbr(*div);
	ft_putchar('\n');
	ft_putnbr(*mod);
	ft_putchar('\n');
	return (0);
}