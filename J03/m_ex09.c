/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ex09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 23:09:20 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/15 17:40:58 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_print_table(int tab[], int size)
{
	int i = 0;

	while (i < size)
	{
		ft_putnbr(tab[i]);
		if (i + 1 < size)
			ft_putstr(", ");
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	int tab[] = {};
	ft_sort_integer_table(tab, 0);
	ft_print_table(tab, 0);
	int tab2[] = {0};
	ft_sort_integer_table(tab2, 1);
	ft_print_table(tab2, 1);
	int tab3[] = {-17, 2};
	ft_sort_integer_table(tab3, 2);
	ft_print_table(tab3, 2);
	int tab4[] = {2, -17};
	ft_sort_integer_table(tab4, 2);
	ft_print_table(tab4, 2);
	int tab5[] = {2147483647, 55644, -88645, -456, 0, 5678, 756, 6, -654, -2147483648, 0, 2368, -456, 2};
	ft_sort_integer_table(tab5, 14);
	ft_print_table(tab5, 14);
	return (0);
}
