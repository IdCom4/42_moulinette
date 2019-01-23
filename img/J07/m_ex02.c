#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *t = NULL;
	int size = 0;

	size = ft_ultimate_range(&t, 0, 0);
	if (t || size != 0)
		printf("KO\n");
	else
		printf("OK\n");

	size = ft_ultimate_range(&t, 10, 10);
	if (t || size != 0)
		printf("KO\n");
	else
		printf("OK\n");

	size = ft_ultimate_range(&t, -42, 42);
	if (!t || size != 42 - -42)
		printf("KO\n");
	else
	{
		for (int i = 0; i < size; i++)
			printf("%d,", t[i]);
		printf("\n");
		free(t);
	}

	size = ft_ultimate_range(&t, -200, -100);
	if (!t || size != -100 - -200)
		printf("KO\n");
	else
	{
		for (int i = 0; i < size; i++)
			printf("%d,", t[i]);
		printf("\n");
		free(t);
	}

	size = ft_ultimate_range(&t, 30, 20);
	if (t || size != 0)
		printf("KO\n");
	else
		printf("OK\n");
	
	size = ft_ultimate_range(&t, 42, 43);
	if (!t || size != 43 - 42)
		printf("KO\n");
	else
	{
		printf("%d", t[0]);
		printf("\n");
		free(t);
	}
	return (0);
}
