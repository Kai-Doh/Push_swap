# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 01:12:25 by ktiomico          #+#    #+#              #
#    Updated: 2024/11/18 03:13:36 by ktiomico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils2.c \
		ft_printf_utils3.c \
		parsing.c \
		render_add.c \
		render_char.c \
		render_hex.c \
		render_nbr.c \
		render_str.c \
		render_str2.c \
		render_unint.c \
		get_next_line.c \
		get_next_line_utils.c


SRCS_BONUS =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

RM = rm -rf
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	@$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	@echo "Library $(NAME) with bonus created."

clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "Library $(NAME) and object files removed."

re: fclean all

.PHONY: all clean fclean re bonus
