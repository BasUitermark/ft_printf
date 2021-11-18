#include "../fpf.h"

int	print_digit(va_list args)
{
	int	out;

	out = ft_putnbr_fd(va_arg(args, int), 1);
	return (out);
}
