#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"
# include "def.h"

int	ft_printf(const char *str, ...);
int	check_format(va_list args, char *str, int i);
int	print_char(va_list args);
int	print_str(va_list args);
int	print_digit(va_list args);
int	print_udigit(va_list args);
int	print_void(va_list args);
int	print_hex_lower(va_list args);
int	print_hex_upper(va_list args);

#endif