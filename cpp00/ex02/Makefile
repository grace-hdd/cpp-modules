# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/25 16:39:50 by grhaddad          #+#    #+#              #
#    Updated: 2026/09/25 16:40:31 by grhaddad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= account
CXX		:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC		:= Account.cpp test.cpp 
OBJS	:= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
