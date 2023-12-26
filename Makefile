# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 09:10:09 by dmatavel          #+#    #+#              #
#    Updated: 2023/12/26 08:41:24 by dmatavel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	file_editor
SRC	=	src/main.cpp src/check_args.cpp src/replace.cpp

OBJ	= $(SRC:.cpp=.o)
CCP	= c++
FLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC)
	$(CCP) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
