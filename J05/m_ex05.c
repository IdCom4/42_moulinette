/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:53:25 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 15:24:10 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", ft_strstr(argv[1], argv[2]));
	return (0);
	
}
