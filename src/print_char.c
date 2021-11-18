#include "../fpf.h"

int	print_char(int out, va_list args)
{
	out += ft_putchar_fd(va_arg(args, int), 1);
	return (out);
}
