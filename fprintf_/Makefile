NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putaddr.c ft_printf.c

OBJS = $(SRCS:.c=.o);

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c  $< -o $@

$(NAME) : $(OBJS)
	ar rcs $@ $^

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJS)

re : fclean all

.PHONY : clean
