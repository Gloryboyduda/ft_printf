NAME = libftprintf.a
SRCS = 
OBJS = $(SRCS:.c=.o)
INCLUDE = libft.h
LIBC = ar rcs $(NAME)
CC = cc
CCFLAGS = -Wall -Wextra -Werror -g

