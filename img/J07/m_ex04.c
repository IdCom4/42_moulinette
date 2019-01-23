#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split_whitespaces(char *str);

static int	print_tab(char **tab)
{
	int i = 0;
	for (i = 0; tab[i] != 0; i++)
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
	}
	free(tab);
	return (i);
}

int main(void)
{
	char **tab;
	int size;
	char *str;
   
	tab = ft_split_whitespaces("");
	size = print_tab(tab);
	if (size != 0)
		printf("KO\n");
	
	str = strdup("coucou");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 1 || strcmp(str, "coucou") != 0)
		printf("KO\n");
	free(str);

	str = strdup("coucou les gens\ncomment\tallez vous ?");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 7 || strcmp(str, "coucou les gens\ncomment\tallez vous ?") != 0)
		printf("KO\n");
	free(str);

	str = strdup("coucou vous");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 2 || strcmp(str, "coucou vous") != 0)
		printf("KO\n");
	free(str);

	str = strdup("salut,ca\tva\tbien?");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 3 || strcmp(str, "salut,ca\tva\tbien?") != 0)
		printf("KO\n");
	free(str);

	str = strdup("   \t\n  \t salut\t   \n\n\n\t");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 1 || strcmp(str, "   \t\n  \t salut\t   \n\n\n\t") != 0)
		printf("KO\n");
	free(str);

	str = strdup("\t\t\n\n   \t\n  \t");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 0 || strcmp(str, "\t\t\n\n   \t\n  \t") != 0)
		printf("KO\n");
	free(str);

	str = strdup("\t\t\n    \t\n \t \n coucou \t  \n\n \t le\t\n  monde    \t  \n\n \t");
	tab = ft_split_whitespaces(str);
	size = print_tab(tab);
	if (size != 3 || strcmp(str, "\t\t\n    \t\n \t \n coucou \t  \n\n \t le\t\n  monde    \t  \n\n \t") != 0)
		printf("KO\n");
	free(str);

	return (0);
}
