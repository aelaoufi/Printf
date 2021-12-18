NAME = libftprintf.a

FILES = ft_putchar.c ft_printf.c ft_putnbr.c \
		ft_putstr.c ft_hexa.c ft_unsputnbr.c \
		ft_adress.c ft_hexaupper.c

OBJS = $(FILES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

AR = ar rcs

%.o: %.c
	cc $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@
all: $(NAME)

$(NAME):	$(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY:all clean fclean re