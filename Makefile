CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a

AR		= ar rcs

SRCS = ft_printf.c \
		print_char.c \
		print_digit.c \
		print_udigit.c \
		print_str.c \
		print_void.c \
		print_hex_lower.c \
		print_hex_upper.c


OBJS = $(SRCS:.c=.o)
OBJS_DIR = objs/
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

GREEN = \033[1;32m
RED = \033[1;31m
MAGENTA = \033[1;35m
RESET = \033[0m

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@echo "$(MAGENTA)Compiling: $(RESET)$<"
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJECTS_PREFIXED)
		@$(AR) $(NAME) $(OBJECTS_PREFIXED)
		@echo "$(GREEN)Library $(NAME) created!$(RESET)"

all: $(NAME)

clean:
		@rm -rf $(OBJS_DIR)
		@echo "$(RED)All object removed!$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)Library $(NAME) removed!$(RESET)"

re:		fclean all

.PHONY: all, clean, fclean, re, bonus

