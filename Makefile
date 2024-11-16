NAME = libftprintf.a
SRCS = $(wildcard *.c) 
OBJS = $(SRCS:.c=.o)
INCLUDE = printf.h
LIBC = ar rcs $(NAME)
CC = gcc
CCFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(OBJS)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: al clean fclean re
