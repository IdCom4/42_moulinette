/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:46:32 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/16 17:25:27 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(int argc, char *argv[])
{
	(void)argc;
	char dest[50] = {0};
	strcpy(dest, argv[1]);
	if (strcmp("overflowTry", argv[1]) == 0)
	{
		for (int i = 0; i < 3; i++)
			strcat(dest, dest);
	}
	printf("%s\n", ft_strcat(dest, argv[2]));
	return (0);
}
