#include "../fpf.h"

int	print_void(va_list args)
{
	int	out;

	out = ft_putstr_fd("0x", 1);
	out += ft_putnbr_base_fd(va_arg(args, size_t), 1, "0123456789abcdef");
	return (out);
}
