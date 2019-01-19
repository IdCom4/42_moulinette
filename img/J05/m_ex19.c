/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 00:33:37 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/17 11:29:47 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(int argc, char *argv[])
{
	(void)argc;
	char dest[45] = "";
	int ag2 = atoi(argv[2]);
	
	printf("%u\n", ft_strlcpy(dest, argv[1], ag2));
	printf("%s\n\n", dest);
	return (0);
}
