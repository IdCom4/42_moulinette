#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split(char *str, char *charset);

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
	char *charset;
   
	charset = strdup("abc");
	tab = ft_split("", charset);
	size = print_tab(tab);
	if (size != 0 || strcmp(charset, "abc") != 0)
		printf("KO\n");
	free(charset);

	str = strdup("coucou");
	charset = strdup("oc");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 2 || strcmp(str, "coucou") != 0 || strcmp(charset, "oc") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	str = strdup("coucou les gens\ncomment\tallez vous ?");
	charset = strdup("");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 1 || strcmp(str, "coucou les gens\ncomment\tallez vous ?") != 0
	|| strcmp(charset, "") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	str = strdup("coucou vous");
	charset = strdup("bali pre lyrike");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 1 || strcmp(str, "coucou vous") != 0
	|| strcmp(charset, "bali pre lyrike") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	str = strdup("salut,ca\tva\tbien?");
	charset = strdup("ae,?");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 6 || strcmp(str, "salut,ca\tva\tbien?") != 0
	|| strcmp(charset, "ae,?") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	str = strdup("Hi everyone, it's Jeff Kaplan from the overwatch team !");
	charset = strdup("Hi everyone, it's Jeff Kaplan from the overwatch team !");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 0
	|| strcmp(str, "Hi everyone, it's Jeff Kaplan from the overwatch team !") != 0
	|| strcmp(charset, "Hi everyone, it's Jeff Kaplan from the overwatch team !") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	str = strdup("salut les amis, comment allez vous ces temps ci ? ca doit etre chouette de commencer sa piscine, profitez en, c'est l'un de vos meilleurs moments a 42 :D");
	charset = strdup("elas");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 33
	|| strcmp(str, "salut les amis, comment allez vous ces temps ci ? ca doit etre chouette de commencer sa piscine, profitez en, c'est l'un de vos meilleurs moments a 42 :D") != 0
	|| strcmp(charset, "elas") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	str = strdup("\t\t\n    \t\n \t \n coucou \t  \n\n \t le\t\n  monde    \t  \n\n \t");
	charset = strdup("\t\n ");
	tab = ft_split(str, charset);
	size = print_tab(tab);
	if (size != 3
	|| strcmp(str, "\t\t\n    \t\n \t \n coucou \t  \n\n \t le\t\n  monde    \t  \n\n \t") != 0
	|| strcmp(charset, "\t\n ") != 0)
		printf("KO\n");
	free(str);
	free(charset);

	return (0);
}
