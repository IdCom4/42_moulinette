#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

static int	print_tab(char **tab)
{
	int i = 0;
	FILE *file = fopen("m_output", "a");
	for (i = 0; tab[i] != 0; i++)
	{
		fprintf(file, "%s\n", tab[i]);
		free(tab[i]);
	}
	free(tab);
	fclose(file);
	return (i);
}

int main(void)
{
	char **tab;
	FILE *file = fopen("m_output", "w+");
 	fprintf(file, "");
	fclose(file);	
	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
			tab = ft_split_whitespaces("");
		if (i == 1)
			tab = ft_split_whitespaces("coucou");
		if (i == 2)
			tab = ft_split_whitespaces("coucou les gens\ncomment\tallez vous ?");
		if (i == 3)
			tab = ft_split_whitespaces("coucou vous");
		if (i == 4)
			tab = ft_split_whitespaces("salut,ca\tva\tbien?");
		if (i == 5)
			tab = ft_split_whitespaces("   \t\n  \t salut\t   \n\n\n\t");
		if (i == 6)
			tab = ft_split_whitespaces("\t\t\n\n   \t\n  \t");
		if (i == 7)
			tab = ft_split_whitespaces("\t\t\n    \t\n \t \n coucou \t  \n\n \t le\t\n  monde    \t  \n\n \t");
		ft_print_words_tables(tab);
		print_tab(tab);
	}
	return (0);
}
