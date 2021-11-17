#ifndef FPF_H
# define FPF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	check_format(int out, va_list args, char *str, int i);
int	print_char(int out, va_list args);
int	print_str(int out, va_list args);
int	print_digit(int out, va_list args);
int	print_udigit(int out, va_list args);
int	print_void(int out, va_list args);
int	print_hex_lower(int out, va_list args);
int	print_hex_upper(int out, va_list args);

#endif