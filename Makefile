SRC = ft_hexadecimal.c ft_pointer.c \
	  ft_putstr_fd.c  ft_u_putnbr_fd.c \
	  ft_putnbr_fd.c ft_putchar_fd.c \
	  ft_printf.c ft_strlcpy.c \
	  ft_strlen.c
OBJS = ${SRC:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc 
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

%.o:%.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME} ${OBJS}

re: fclean all

.PHONY : all clean fclean re