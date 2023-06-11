OBJS = 
SRCS = 
NAME = libft.a
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

%.o : %.c
	cc $(CFLAG) -c $< -o $@ -I libft.h

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re