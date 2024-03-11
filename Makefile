NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c \
		ft_utils.c \
		ft_utilstwo.c \
		ft_utilsthree.c 

OBJS = $(SRCS:.c=.o)

CC = cc

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rsc $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
