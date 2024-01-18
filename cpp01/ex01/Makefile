# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 15:19:38 by ubuntu            #+#    #+#              #
#    Updated: 2024/01/18 15:29:27 by ubuntu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

NAME		= hordes

INCLUDE 	= -I ./

SRCS		= zombieHorde.cpp main.cpp Zombie.cpp

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) $(INCLUDE) -c
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) $(INCLUDE)
			
clean:
			$(RM) -r $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
