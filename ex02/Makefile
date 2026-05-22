# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/10 19:29:41 by ymsa              #+#    #+#              #
#    Updated: 2026/05/10 19:29:41 by ymsa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = main

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp
OBJS    = $(SRCS:.cpp=.o)
HEADERS	= MutantStack.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all