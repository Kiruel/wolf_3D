#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/20 15:13:13 by etheodor          #+#    #+#              #
#    Updated: 2015/01/05 09:44:47 by etheodor         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = wolf3d

CFLAG = -Wall -Werror -Wextra -I ./includes -I ./libft/includes

MINILIBX = -L/usr/x11/lib -lmlx -lXext -lX11

LIBFT = ./libft/includes

SOURCE = ./srcs/main.c \
./srcs/ft_error.c \
./srcs/ft_mlx_hook.c \
./srcs/ft_mlx_tools.c \
./srcs/ft_map.c

POINTO = main.o \
ft_error.o \
ft_mlx_hook.o \
ft_mlx_tools.o \
ft_map.o

all: $(NAME)
	@echo "all: OK"

$(NAME):
	@make -C libft/ fclean
	@make -C libft
	@make -C libft/ clean
	@gcc -c -g $(CFLAG) $(SOURCE) -I $(LIBFT)
	@gcc $(CFLAG) -o $(NAME) $(POINTO) ./libft/libft.a -L/usr/x11/lib -lmlx -lXext -lX11
	@make clean

test:
	@gcc -c -g $(CFLAG) $(SOURCE)
	@gcc $(CFLAG) -o $(NAME) $(POINTO) ./libft/libft.a -L/usr/x11/lib -lmlx -lXext -lX11
	@make clean
	@echo "test: OK"

clean:
	@rm -rf $(POINTO)

fclean: clean
	@rm -rf $(NAME)
	@echo "fclean: OK"

re: fclean all

.PHONY: re fclean clean all $(NAME) test
