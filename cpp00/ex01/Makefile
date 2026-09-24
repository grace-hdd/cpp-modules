# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grhaddad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/24 14:15:53 by grhaddad          #+#    #+#              #
#    Updated: 2026/09/24 14:16:46 by grhaddad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook
CXX		:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC		:= phonebook.cpp
OBJS	:= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
$(OBJS)/%.o: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
