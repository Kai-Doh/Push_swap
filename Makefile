NAME = push_swap

CC = gcc

CFLAGS = -Werror -Wall -Wextra -g -I./include

RM = rm -rf

SRCS =	src/Push_swap.c\
		src/Push_swap_utils.c\
		src/Push_swap_dispatch.c\
		src/Push_swap_3_5.c\
		src/Push_swap_quick_sort.c\
		src/Push_swap_index.c\
		libft/libft.a\
		operations/Operation_Push.c\
		operations/Operation_Reverse_rotate.c\
		operations/Operation_Rotate.c\
		operations/Operation_Swap.c

$(NAME) :
		make bonus -C libft
		gcc $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -C libft

clean :
	$(RM) $(NAME)
	make clean -C libft

re : fclean all
