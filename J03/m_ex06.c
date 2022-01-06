/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:56:28 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:56:33 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(ft_strlen(argv[1]));
	return (0);
}