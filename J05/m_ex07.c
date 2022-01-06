/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:40:34 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 15:48:15 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char *argv[])
{
	(void)argc;
	unsigned int ag3 = atoi(argv[3]);

	printf("%d\n", ft_strncmp(argv[1], argv[2], ag3));
	return (0);
}
