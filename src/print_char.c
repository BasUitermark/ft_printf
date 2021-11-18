#include "../fpf.h"

int	print_char(va_list args)
{
	int	out;

	out = ft_putchar_fd(va_arg(args, int), 1);
	return (out);
}
