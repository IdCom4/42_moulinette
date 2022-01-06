/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 23:03:57 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 15:23:37 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(ft_atoi(argv[1]));
	return (0);
}
