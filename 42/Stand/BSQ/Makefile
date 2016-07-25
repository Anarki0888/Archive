# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 18:12:43 by asteffan          #+#    #+#              #
#    Updated: 2016/07/25 18:14:46 by asteffan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =

SRC =

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra -I includes $(SRC)
	@gcc -o $(NAME) ft_display_file.o

clean:
	@rm

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
