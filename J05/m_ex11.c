/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:13:48 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/18 18:29:37 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", ft_str_is_alpha(argv[1]));
	return (0);
}
