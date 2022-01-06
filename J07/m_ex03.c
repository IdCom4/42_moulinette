#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	char *str = ft_concat_params(argc, argv);

	if (str)
	{
		printf("%lu\n%s\n", strlen(str), str);
		free(str);
	}
	else
		printf("NULL\n");
	return (0);
}
