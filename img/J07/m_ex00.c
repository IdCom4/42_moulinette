#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char 	*ft_strdup(char *str);

int	main(void)
{
	char *s = NULL;

	s = ft_strdup("");
	printf("%s\n", s);

	s = ft_strdup("\0");
	printf("%s\n", s);

	s = ft_strdup("t");
	printf("%lu\n%s\n", strlen(s), s);
	free(s);

	s = ft_strdup("\t");
	printf("%lu\n%s\n", strlen(s), s);
	free(s);

	s = ft_strdup("hi everyone it's Jeff Kaplan from the overwatch team !");
	printf("%lu\n%s\n", strlen(s), s);
	free(s);
	return (0);
}
