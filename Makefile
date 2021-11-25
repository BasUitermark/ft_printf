#Filename library
NAME		= libftprintf.a

#Directory names & filetype
DIR_SRCS	= src
DIR_OBJS	= objs

SRCS_DIRS	= $(addprefix $(DIR_SRCS)/, $(dir))
OBJS_DIRS	= $(addprefix $(DIR_OBJS)/, $(dir))

#Sourcefiles
#Note: Only filename needed. "addprefix" and "addsuffix" add path and filetype.
SRCS		= $(addprefix src/, $(addsuffix .c, \
			ft_printf))
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar rcs
RM			= rm -f

GREEN = \033[1;32m
RED = \033[1;31m
MAGENTA = \033[1;35m
RESET = \033[0m

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	@echo "$(MAGENTA)Compiling: $(RESET)$<"
	@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
		@$(MAKE) -C ./libft
		@cp libft/libft.a $(NAME)
		@$(AR) $(NAME) $(OBJS)
		@echo "$(GREEN)Library $(NAME) created!$(RESET)"

all: $(NAME)

clean:
		@$(MAKE) clean -C ./libft
		@$(RM) $(OBJS)
		@$(RM) -r $(DIR_OBJS)
		@echo "$(RED)All objects removed!$(RESET)"

fclean: clean
		@$(MAKE) fclean -C ./libft
		@$(RM) $(NAME)
		@echo "$(RED)Library $(NAME) removed!$(RESET)"

re:		fclean all

.PHONY: all, clean, fclean, re

