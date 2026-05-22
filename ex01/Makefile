# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 17:07:35 by ymsa              #+#    #+#              #
#    Updated: 2026/05/21 17:07:35 by ymsa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Span

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp Span.cpp
OBJS    = $(SRCS:.cpp=.o)
HEADERS	= Span.hpp

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