/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:58:59 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:59:01 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	*ft_strrev(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(ft_strrev(argv[1]));
	return (0);
}