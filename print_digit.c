#include "fpf.h"

int	print_digit(int out, va_list args)
{
	out += ft_putnbr_fd(va_arg(args, int), 1);
	return (out);
}
