# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 01:49:45 by ubuntu            #+#    #+#              #
#    Updated: 2024/01/19 02:18:30 by ubuntu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

RM			= rm -f

NAME		= harl

INCLUDE 	= -I ./

SRCS		= main.cpp Harl.cpp

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
