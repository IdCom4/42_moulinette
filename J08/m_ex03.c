#include "ft_abs.h"
#include <stdio.h>
int	main(void)
{
	for (int i = -200; i < 200; i++)
	{
		if (ABS(i) != ((i < 0) ? -i : i))
			printf("error: Wrong value\n");
	}
	return (0);
}
