/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:53:04 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:53:07 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[1]);
	return (0);
}