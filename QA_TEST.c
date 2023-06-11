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
	//printf("memchr : whereis, e --> %s", ft_memchr("whereis", 'e', 7));
}