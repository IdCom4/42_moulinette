/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:05:53 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 15:23:57 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char *argv[])
{
	(void)argc;
	char dest[40] = {0};

	ft_putstr(ft_strcpy(dest, argv[1]));
	return (0);
}
