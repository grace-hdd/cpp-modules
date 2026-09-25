# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/24 14:15:53 by grhaddad          #+#    #+#              #
#    Updated: 2026/09/25 15:54:22 by grhaddad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook
CXX		:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC		:= main.cpp phonebook.cpp contact.cpp 
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
