#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void	*my_print_memory(void *addr, unsigned int size);
void	*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char *dest;
	char *b_up;
	char *adr = NULL;

	if (!(dest = malloc(sizeof(char) * 200)) || !(b_up = malloc(sizeof(char) * 200)))
	{
		printf("Main error : memory allocation failed\n");
		return (-1);
	}
	bzero(dest, 200);
	bzero(b_up, 200);

	for (int i = 1; i <= 127; i++)
		dest[i - 1] = i;
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "1KO\n", 4);

	dest = strcpy(dest, "coucou\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "2KO\n", 4);

	dest = strcpy(dest, "\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "3KO\n", 4);

	dest = strcpy(dest, "test size 0\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, 0);
	adr = ft_print_memory(dest, 0);
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "4KO\n", 4);

	dest = strcpy(dest, "coucou les gens comment allez vous en ce moment ? moi pas trop mal il faut avouer, meme surement plutot bien en fait :)\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "5KO\n", 4);

	dest = strcpy(dest, "c\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "6KO\n", 4);

	dest = strcpy(dest, "0123456789abcdef\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "6KO\n", 4);

	dest = strcpy(dest, "0123456789abcdef+\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "7KO\n", 4);

	dest = strcpy(dest, "0123456789abcde\0");
	b_up = strcpy(b_up, dest);
	my_print_memory(dest, strlen(dest));
	adr = ft_print_memory(dest, strlen(dest));
	if (strcmp(dest, b_up) != 0 || adr != dest)
		write(1, "8KO\n", 4);

	free(dest);
	free(b_up);
	int tab[10] = {14, 86, 3, 18, 100, 127, 54, 42, 63, 8};
	int bak[10] = {14, 86, 3, 18, 100, 127, 54, 42, 63, 8};
	void *adrr;

	my_print_memory(tab, 10);
	adrr = ft_print_memory(tab, 10);
	for (int i = 0; i < 10; i++)
	{
		if (tab[i] != bak[i] || sizeof(tab) != 10 * sizeof(int) || adrr != tab)
			write(1, "9KO\n", 4);
	}
	return (0);
}
