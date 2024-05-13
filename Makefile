
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -f
AR = ar rc

SRC = push_swap.c\
		parsing.c\
			read_numbers_func.c\
				utilis_functions.c\
				libft.c\
				libft2.c\
				list.c\
				
				
						

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o  $(NAME)  $(OBJS)
	
clean:	
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
test:
re : fclean all

.PHONY: all clean fclean re 
