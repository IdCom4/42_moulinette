/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:46:25 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 15:56:14 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", ft_strupcase(argv[1]));
	return (0);
}
