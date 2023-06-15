# 오픈소스 과제 5

## :card_index_dividers: **libft.h is...**
표준 C 라이브러리를 재작성하고 몇 가지 유용한 기능을 더한 라이브러리로, linux환경에서 호환됩니다.
libft.h에서 제공하는 함수들의 prototype은 다음과 같습니다 :
```c
int ft_atoi(const char *str); //문자열을 정수로 변환
void  ft_bzero(void *s, size_t n); //n바이트를 0으로 채움
void  *ft_calloc(size_t count, size_t size); //공간을 할당하고 초기화
int ft_tolower(int c); //알파벳 대문자를 소문자로 변환
int ft_toupper(int c); //알파벳 소문자를 대문자로 변환
char  **ft_split(char const *s, char c); //문자열을 구분자로 끊어낸 문자열 배열을 반환
char  *ft_itoa(int n); //정수를 문자열로 변환

int ft_isalnum(int c); //알파벳 또는 숫자인지 확인
int ft_isalpha(int c); //알파벳인지 확인
int ft_isascii(int c); //아스키코드 범위 내인지 확인
int ft_isdigit(int c); //십진수 숫자인지 확인
int ft_isprint(int c); //출력가능한 아스키코드 범위인지 확인

void  *ft_memchr(const void *s, int c, size_t n); //바이트 내에서 문자 c 처음 나오는 위치 탐색
int ft_memcmp(const void *s1, const void *s2, size_t n); //n바이트 비교
void  *ft_memcpy(void *dest, const void *src, size_t n); //n바이트 복사
void  *ft_memmove(void *dest, const void *src, size_t n); //n바이트 복사
void  *ft_memset(void *s, int c, size_t n); //n바이트를 문자로 채움

char  *ft_strchr(const char *s, int c); //문자열 내에서 문자 c 처음 나오는 위치 탐색
char  *ft_strdup(char *src); //src와 같은 내용의 새 문자열을 할당하고 복사하여 반환
size_t  ft_strlcat(char *dest, const char *src, size_t size); //문자열을 size만큼 이어붙임
size_t  ft_strlcpy(char *dest, char *src, size_t size); //문자열을 size만큼 복사함
size_t  ft_strlen(const char *str); //문자열의 길이 반환
int ft_strncmp(const char *s1, const char *s2, size_t n); //문자열을 n만큼 비교
char  *ft_strnstr(const char *haystack, const char *needle, size_t len); //haystack 문자열 내에 needle 문자열이 존재하는지 탐색하고, 존재한다면 그 위치 반환 
char  *ft_strrchr(const char *s, int c); //문자열 내에서 문자 c가 마지막으로 나오는 위치 탐색
char  *ft_strmapi(char const *s, char (*f)(unsigned int, char)); //문자열의 각 문자에 함수를 적용시킨 결과를 담은 문자열 반환
void  ft_striteri(char *s, void (*f)(unsigned int, char *)); //문자열에 각 문자에 함수를 적용
char  *ft_substr(char const *s, unsigned int start, size_t len); //부분문자열 반환
char  *ft_strjoin(char const *s1, char const *s2); //문자열 합치기
char  *ft_strtrim(char const *s1, char const *set); //문자열 앞뒤에서 set에 해당하는 문자 제거

void  ft_putchar_fd(char c, int fd); //파일디스크림터에 문자 출력
void  ft_putstr_fd(char *s, int fd); //파일디스크립터에 문자열 출력
void  ft_putendl_fd(char *s, int fd); //파일디스크립터에 문자열과 개행 출력
void  ft_putnbr_fd(int n, int fd); //파일디스크립터에 정수 출력

//이 이하는 연결리스트에 관한 함수입니다.
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
t_list  *ft_lstnew(void *content); //새 노드 생성
void  ft_lstadd_back(t_list **lst, t_list *new); //연결리스트의 맨 뒤에 값 추가
void  ft_lstadd_front(t_list **lst, t_list *new); //연결리스트의 맨 앞에 값 추가
t_list  *ft_lstlast(t_list *lst); //연결리스트의 맨 뒤 노드 반환
int ft_lstsize(t_list *lst); //연결리스트의 노드 수 반환
void  ft_lstdelone(t_list *lst, void (*del)(void *)); //연결리스트에서 한 노드 삭제
void  ft_lstclear(t_list **lst, void (*del)(void *)); //연결리스트의 노드 모두 삭제
void  ft_lstiter(t_list *lst, void (*f)(void *)); //연결리스트의 각 노드에 함수 적용
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); //연결리스트의 각 노드에 함수를 적용한 결과 반환
```

## :hammer_and_wrench: **how to build?** 
libft 라이브러리를 사용하기 위해선 다음과 같이 빌드과정을 거쳐야 합니다 :

> $ git clone https://github.com/sungpaks/Assignment5.git </br>
$ cd Assignment5 </br></br>
$ make  </br>
$ make all </br>
$ make libft.a
*위의 세 명령어는 라이브러리가 참조하는 모든 src파일(.c) 파일들을 같은 이름의 object파일(.o)로 컴파일하고, libft.a 파일을 현재 디렉토리에 생성합니다.* </br>
</br> *이외의 make 명령어들 :* </br>
$ make re </br>
*이 명령어는 컴파일&빌드 과정을 다시 진행합니다.* </br>
$ make clean </br>
*이 명령어는 object파일들을 모두 지웁니다.* </br>
$ make fclean </br>
*이 명령어는 object파일들을 모두 지우며, 또한 libft.a파일을 지웁니다.* </br>


## :link: **how to include, compile, and link with libft.a?**
#### starting at the directory "Assignment5"

##### *first, include header in your source file (assum that the file name is --> source_file.c)*
> #include "libft.h"

##### *if you'd complete the code, compile using this commend :*

> gcc source_file.c -I. -L. -lft
