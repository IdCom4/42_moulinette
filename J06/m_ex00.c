#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int main(void)
{
	int a = 2;
	int b = 4;
	char str[] = "let's see if the swap worked :\n";

	ft_putchar('c');
	ft_swap(&a, &b);
	printf("%d\n", ft_strcmp(str, "let's see if the swap worked :\n"));
	ft_putstr(str);
	if (a == 4 && b == 2)
		ft_putstr("yes\n");
	else
		ft_putstr("no\n");
	printf("len = %d\n", ft_strlen(""));
	printf("len = %d\n", ft_strlen("coucou"));
	printf("len = %d\n", ft_strlen("how  \r  are\tu\n"));
	return (0);
}
