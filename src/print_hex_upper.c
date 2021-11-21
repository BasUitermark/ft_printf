#include "../fpf.h"

int	print_hex_upper(va_list args)
{
	int	out;

	out = ft_putnbr_base_fd(va_arg(args, size_t), 1, "0123456789ABCDEF");
	return (out);
}
