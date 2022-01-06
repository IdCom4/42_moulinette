/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:38:40 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 15:24:05 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char *argv[])
{
	(void)argc;
	char dest[40] = {0};
	int ag2 = atoi(argv[2]);
	if (ag2 == 39)
		ag2 = 50;
	printf("%s\n", ft_strncpy(dest, argv[1], atoi(argv[2])));
	return (0);
}
