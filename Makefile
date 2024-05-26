
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -f

SRC = push_swap.c\
		parsing.c\
			read_numbers_func.c\
				utilis_functions.c\
				libft.c\
				libft2.c\
				list.c\
				ft_sort.c\
				actionv1.c\
				actions2.c\
				algov1.c\
				algov2.c\
				utilis_functions_v2.c\
				
				
						

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	
clean:	
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
test:
re : fclean all

.PHONY: all clean fclean re 
