
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

SRC = mandatory/push_swap.c\
		mandatory/parsing.c\
			mandatory/read_numbers_func.c\
				mandatory/utilis_functions.c\
				libft/libft.c\
				libft/libft2.c\
				mandatory/list.c\
				mandatory/ft_sort.c\
				mandatory/actionv1.c\
				mandatory/actions2.c\
				mandatory/algov1.c\
				mandatory/algov2.c\
				mandatory/free_functions.c\
				mandatory/utilis_functions_v2.c\
				printf/ft_printf.c printf/ft_print_nbr.c printf/ft_print_str.c printf/ft_printf_char.c printf/ft_print_hex.c printf/ft_print_ptr.c printf/ft_print_unsigned.c\
				
				
						

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
