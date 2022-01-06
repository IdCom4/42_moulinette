#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int		main(void)
{
	printf("%d\n", ft_atoi_base("-2639", ""));
	printf("%d\n", ft_atoi_base("-2639", "0"));
	printf("%d\n", ft_atoi_base("-101001001111", "01"));
	printf("%d\n", ft_atoi_base("wOmiIOr", "myOwnP3rBaseDulikIt?"));
	printf("%d\n", ft_atoi_base("nPw", "01szrg"));
	printf("%d\n", ft_atoi_base("221101", "02"));
	printf("%d\n", ft_atoi_base("-33233345", "012345"));
	printf("%d\n", ft_atoi_base("45510", "012345678"));
	printf("%d\n", ft_atoi_base("-24C22B96", "0123456789ABCD"));
	printf("%d\n", ft_atoi_base("7FFFFFFF", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("offfffffffi", "poneyvif"));
	printf("%d\n", ft_atoi_base("-15N1TRP", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXY"));
	printf("%d\n", ft_atoi_base("+12", "012"));
	printf("%d\n", ft_atoi_base("-12", "012"));
	printf("%d\n", ft_atoi_base("12", "01\t2"));
	printf("%d\n", ft_atoi_base("123", "012"));
	printf("%d\n", ft_atoi_base("0", "012"));
	printf("%d\n", ft_atoi_base("-0", "012"));
	printf("%d\n", ft_atoi_base("1", "1"));
	printf("%d\n", ft_atoi_base("12", "0124361"));
	printf("%d\n", ft_atoi_base("12", "01-2"));
	printf("%d\n", ft_atoi_base("12", "01+2"));
	printf("%d\n", ft_atoi_base("684351Z", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXY"));
	printf("%d\n", ft_atoi_base("", "012"));
	printf("%d\n", ft_atoi_base("\0\0", "012"));
	printf("%d\n", ft_atoi_base("12", ""));
	printf("%d\n", ft_atoi_base("12", "\0"));
	printf("%d\n", ft_atoi_base("12-", "012"));
	printf("%d\n", ft_atoi_base("1-2", "012"));
	printf("%d\n", ft_atoi_base("12+", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t--102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t-+102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t++102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t+-102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t-102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t+102", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t102r", "012"));
	printf("%d\n", ft_atoi_base("\t\n\r\t\n   \t10r2", "012"));
	return (0);
}
