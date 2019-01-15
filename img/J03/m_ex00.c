/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:27:04 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:27:06 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_ft(int *ptr);
void	ft_putnbr(int nb);

int		main(void)
{
	int i = 0;
	int *ptr = &i;

	ft_ft(ptr);
	ft_putnbr(*ptr);
	ft_putchar('\n');
	return (0);
}