#include "ft_stock_par.h"
#include <stdio.h>

t_stock_par	*ft_show_tab(t_stock_par *tab);

int	main(int argc, char **argv)
{
	t_stock_par *tab = NULL;
	if (argc >= 1)
	{
		argv[0][0] = 'a';
		argv[0][1] = 0;
	}
	if (!(tab = ft_param_to_tab(argc, argv)))
	{
		printf("error: NULL value.\n");
		return (0);
	}
	ft_show_tab(tab);
	return (0);
}
