/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:03:54 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 17:33:09 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main(int argc, char *argv[])
{
	(void)argc;
	char dest1[50] = "";

	strcpy(dest1, argv[1]);
	printf("%s\n", ft_strncat(dest1, argv[2], atoi(argv[3])));
	return (0);
}
