# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 17:04:28 by mdziadko          #+#    #+#              #
#    Updated: 2026/02/08 09:40:31 by mdziadko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# 								   VARIABLES								   #
# **************************************************************************** #

NAME	= phonebook
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

# **************************************************************************** #
# 									FILES									   #
# **************************************************************************** #

SRCS	= PhoneBook.cpp Contact.cpp utils.cpp main.cpp
OBJS	= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))
OBJ_DIR	= obj
HEADERS	= utils.hpp PhoneBook.hpp Contact.hpp

# **************************************************************************** #
# 									RULES									   #
# **************************************************************************** #

all: $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re