#include "../fpf.h"

int	print_void(va_list args)
{
	int	out;

	out = ft_putstr_fd("0x", 1);
	out += ft_putnbr_base_fd(va_arg(args, int), 1, 16);
	return (out);
}
