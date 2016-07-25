# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 13:22:44 by asteffan          #+#    #+#              #
#    Updated: 2016/07/23 14:18:12 by asteffan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra -I includes $(SRC)
	@ar rc $(NAME)

clean:
	@/bin/rm -f

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
