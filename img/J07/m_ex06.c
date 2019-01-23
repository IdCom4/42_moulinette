#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *str;

	str = ft_convert_base("1010001111011", "01", "0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("1010001111011", "01", "0123456789abcdef");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("1010001111011", "01", "01234");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("1010001111011", "01", "qwertyAZERTY");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("-1010001111011", "01", "01234567");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("0", "012345", "0123456789ab");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("-2147483648", "0123456789", "0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("2147483647", "0123456789", "0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("1igb", "0123456789abcdefghijklmn", "abcdef0123456789");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("-&#*)}!", "$}*_&#@!^)=", "salut moi.");
	printf("%s\n", str);
	free(str);

	str = ft_convert_base("-5gh4ek9", "0123456789abcdefghijklmn", "01");
	printf("%s\n", str);
	free(str);

	return (0);
}
