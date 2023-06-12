#include "libft.h"
#include "stdio.h"

int main () {
	printf("------------QA_TEST-------------\n");
	printf("tolower : A --> %c\n", ft_tolower('A'));
	printf("toupper : a --> %c\n", ft_toupper('a'));
	printf("strtrim : *&*&&abcdef&**, *& --> %s\n", ft_strtrim("*&*&&abcdef&**", "*&"));
	printf("strrchr : whereis, e --> %s\n", ft_strrchr("whereis", 'e'));
	printf("strncmp : abcd, abcde, 4 --> %d\n", ft_strncmp("abcd", "abcde", 4));
	printf("strlen : length --> %d\n", (int)ft_strlen("length"));
	printf("strjoin : 'jo' + 'in' --> %s\n", ft_strjoin("jo", "in"));
	
	printf("------------QA_TEST2------------\n");
	printf("memchr : whereis, e --> %s", (char *)ft_memchr("whereis", 'e', 7));
	printf("atoi : 1234 --> %d\n", ft_atoi("1234"));
	printf("isalnum : 1 --> %d\n", ft_isalnum('1'));
	printf("itoa : 1234 --> %s\n", ft_itoa(1234));
	char *str = "abc*def*ghi";
	char **split = ft_split(str, '*');
	printf("split : abc*def*ghi --> %s, %s, %s\n", split[0], split[1], split[2]);
	printf("isdigit : 1 --> %d\n", ft_isdigit('1'));
}