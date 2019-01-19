/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:40:58 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 16:59:31 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char test[] = "Hey guys how are u doin ?";
	for (int i = 0; i < 127; i++)
	{
		test[8] = i;
		printf("%d\n", ft_str_is_printable(test));
	}
	return (0);
}
