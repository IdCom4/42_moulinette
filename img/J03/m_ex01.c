/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:32:50 by idcornua          #+#    #+#             */
/*   Updated: 2018/07/26 22:32:51 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_ultimate_ft(int *********ptr);
void	ft_putnbr(int nb);

int		main(void)
{
	int i = 0;
	int *ptr = &i;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}