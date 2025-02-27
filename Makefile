NAME			=	libftprintf.a

SRC				=	./src/ft_printf.c \
					./src/ft_utils.c \
					./src/ft_utilstwo.c \
					./src/ft_utilsthree.c 

CC				=	cc -Wall -Werror -Wextra

OBJD			=	obj

OBJ				=	$(patsubst ./src/%.c, $(OBJD)/%.o, $(SRC))

${shell mkdir -p ${OBJD}}

$(OBJD)/%.o		:	./src/%.c
					@$(CC) -o $@ -c $<

all				:	$(NAME)

$(NAME)			:	$(OBJ)
					@ar rsc $@ $^
					@echo "Compiled with success"

clean			:
					@rm -rf $(OBJD)
					@echo "Clean with success"

fclean			:	clean
					@rm -f $(NAME)
					@echo "Fclean with success"

re				:	fclean all

.PHONY			:	all clean fclean re