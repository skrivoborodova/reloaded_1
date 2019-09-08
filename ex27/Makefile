# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oearlene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 19:40:03 by oearlene          #+#    #+#              #
#    Updated: 2019/09/08 23:23:12 by oearlene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -c

SRC = *.c

NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	gcc -o $(NAME) ft_display_file.o 

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
