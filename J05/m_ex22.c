#include <stdlib.h>
#include <unistd.h>

int	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[50] = "Coucou tu vas bien ?";

	for (int i = 0; i <= 127; i++)
	{
		str[6] = i;
		ft_putstr_non_printable(str);
		write(1, "\n", 1);
	}
	return (0);
}
