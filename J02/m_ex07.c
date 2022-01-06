/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:13:31 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 16:13:32 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_print_combn(int n);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_print_combn(atoi(argv[1]));
	return (0);
}
