#ifndef FPF_H
# define FPF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	check_format(va_list args, char *str, int i);
int	fpf_char(va_list args, int i);

#endif