/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:30:38 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 16:43:23 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", ft_str_is_uppercase(argv[1]));
	return (0);
}
