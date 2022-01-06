#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *t = NULL;

	t = ft_range(0, 0);
	if (t)
		printf("KO\n");
	else
		printf("OK\n");

	t = ft_range(10, 10);
	if (t)
		printf("KO\n");
	else
		printf("OK\n");

	t = ft_range(-42, 42);
	if (!t)
		printf("KO\n");
	else
	{
		for (int i = 0; i < 42 - -42; i++)
			printf("%d,", t[i]);
		printf("\n");
		free(t);
	}

	t = ft_range(-200, -100);
	if (!t)
		printf("KO\n");
	else
	{
		for (int i = 0; i < -100 - -200; i++)
			printf("%d,", t[i]);
		printf("\n");
		free(t);
	}

	t = ft_range(30, 20);
	if (t)
		printf("KO\n");
	else
		printf("OK\n");
	
	t = ft_range(42, 43);
	if (!t)
		printf("KO\n");
	else
	{
		printf("%d", t[0]);
		printf("\n");
		free(t);
	}
	return (0);
}
