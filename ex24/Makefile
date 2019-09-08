# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oearlene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 08:59:25 by oearlene          #+#    #+#              #
#    Updated: 2019/09/06 09:32:25 by oearlene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/*.c

HED = includes/*.h

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME) $(OBJ)

$(NAME):
	ar rc $(NAME) $(OBJ) $(HED)

$(OBJ): $(SRC)
	gcc $(FLAGS) $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
