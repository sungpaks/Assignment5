# 오픈소스 과제 5

## :hammer_and_wrench: **how to build?** 
##### *starting in fundamental directory (includes Makefile, libft.h, src files(.c))*

```
$ make
$ make all
//이 두 명령어는 모든 src파일(.c) 파일들을 같은 이름의 object파일(.o)로 컴파일하고, libft.a 파일을 현재 디렉토리에 생성합니다.
$ make re
//이 명령어는 컴파일&빌드 과정을 다시 진행합니다.
$ make clean
//이 명령어는 object파일들을 모두 지웁니다.
$ make fclean
//이 명령어는 object파일들을 모두 지우며, 또한 libft.a파일을 지웁니다.
```

## :link: **how to include, compile, and link with libft.a?**
#### *also, starting in fundamental directory (includes Makefile, libft.h, src files(.c))*

##### *first, include header in your source file (source_file.c)*
```
#include "libft.h"
```
##### *if you'd complete the code, compile using this commend :*
```
gcc source_file.c -I. -L. -lft
//or, 
cc source_file.c -I. -L. -lft
```
