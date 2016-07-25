# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 12:27:23 by asteffan          #+#    #+#              #
#    Updated: 2016/07/21 12:52:25 by asteffan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra -I includes $(SRC)
	@gcc -o $(NAME) ft_display_file.o

clean:
	@rm ft_display_file.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
