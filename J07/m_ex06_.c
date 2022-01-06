#include <stdio.h>
#include "../../../Libft/libft.h"

int main(void)
{
	char *str;

	str = ft_base_n_to_x("1010001111011", "01", "0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("1010001111011", "01", "0123456789abcdef");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("1010001111011", "01", "01234");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("1010001111011", "01", "qwertyAZERTY");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("-1010001111011", "01", "01234567");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("0", "012345", "0123456789ab");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("-2147483648", "0123456789", "0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("2147483647", "0123456789", "0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("1igb", "0123456789abcdefghijklmn", "abcdef0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("-&#*)}!", "$}*_&#@!^)=", "salut moi.");
	printf("%s\n", str);
	free(str);

	str = ft_base_n_to_x("-5gh4ek9", "0123456789abcdefghijklmn", "01");
	printf("%s\n", str);
	free(str);

	return (0);
}
