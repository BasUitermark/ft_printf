CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a

AR		= ar rcs

SRCS = ft_printf.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
		echo "(INFO) Library ($(NAME)) created!"

clean:
		rm -f $(OBJS)
		echo "(INFO) All object removed!"

fclean: clean
		rm -f $(NAME)
		echo "(INFO) Library ($(NAME)) removed!"

re:		fclean all

.PHONY: all, clean, fclean, re, bonus
