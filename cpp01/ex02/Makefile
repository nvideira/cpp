# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 15:44:00 by ubuntu            #+#    #+#              #
#    Updated: 2024/01/18 15:54:49 by ubuntu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

RM			= rm -f

NAME		= brain

INCLUDE 	= -I ./

SRCS		= main.cpp

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
