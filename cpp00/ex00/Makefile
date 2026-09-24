# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/22 16:53:25 by grhaddad          #+#    #+#              #
#    Updated: 2026/09/22 17:02:58 by grhaddad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone
CXX		:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC		:= megaphone.cpp
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