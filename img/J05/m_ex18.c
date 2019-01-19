/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 00:13:08 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/17 11:09:40 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char *argv[])
{
	(void)argc;
	int ag3 = atoi(argv[3]);
	char dest[45] = "";
/*	char dest2[45] = "";

	strcpy(dest2, argv[1]);
	printf("real = %lu\n", strlcat(dest2, argv[2], ag3));
	printf("real = %s\n", dest2);*/

	strcpy(dest, argv[1]);
	printf("%u\n", ft_strlcat(dest, argv[2], ag3));
	printf("%s\n", dest);
	return (0);
}
