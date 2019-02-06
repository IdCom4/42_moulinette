#include "Libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int	main(void)
{
	char *line;
	int required[8] = {0};
	int fd = open("ft.h", O_RDONLY);
	if (fd < 0)
	{
		printf("error: failed to open the file.\n");
		return (1);
	}
	while (get_next_line(fd, &line) == 1)
	{
		if (ft_stristr(line, "#ifndef FT_H") != -1)
			required[0] = 1;
		if (ft_stristr(line, "define FT_H") != -1)
			required[1] = 1;
		if (ft_stristr(line, "ft_putchar(char c);") != -1)
			required[2] = 1;
		if (ft_stristr(line, "ft_putstr(char *str);") != -1)
			required[3] = 1;
		if (ft_stristr(line, "ft_strcmp(char *s1, char *s2);") != -1)
			required[4] = 1;
		if (ft_stristr(line, "ft_strlen(char *str);") != -1)
			required[5] = 1;
		if (ft_stristr(line, "ft_swap(int *a, int *b);") != -1)
			required[6] = 1;
		if (ft_stristr(line, "#endif") != -1)
			required[7] = 1;
		free(line);
	}
	close(fd);
	for (int i = 0; i < 8; i++)
	{
		if (required[i] == 0)
		{
			printf("error: informations missing in ft.h.");
			return (1);
		}
	}
	return (0);
}
