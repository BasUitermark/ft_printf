#ifndef FPF_H
# define FPF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_print
{
	va_list	args;
	int		len;
}t_print;

int	ft_printf(const char *str, ...);
int	check_format(int out, va_list args, char *str, int i);
int	print_char(int out, va_list args);
int	print_str(int out, va_list args);

#endif