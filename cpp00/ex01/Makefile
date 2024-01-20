# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 17:58:56 by nvideira          #+#    #+#              #
#    Updated: 2024/01/20 15:25:19 by ubuntu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

RM			= rm -f

NAME		= phonebook

INCLUDE 	= -I ./

SRCS		= PhoneBook.cpp main.cpp Contact.cpp utils.cpp

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
