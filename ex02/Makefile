# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/20 10:08:20 by hsamira           #+#    #+#              #
#    Updated: 2026/02/22 14:17:30 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CXX = c++

CXXFLAG = -Wall -Werror -Wextra -std=c++98 -MMD -MP

SRC =  AAnimal.cpp Cat.cpp Dog.cpp  Brain.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

DEPS = $(SRC:.cpp=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean: 
	rm -f $(OBJ)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : re all clean fclean
-include $(DEPS)