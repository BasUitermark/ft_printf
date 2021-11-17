#include "fpf.h"

int	print_hex_lower(int out, va_list args)
{
	out += ft_putstr_fd(ft_itoa_base(va_arg(args, size_t), \
	"0123456789abcdef"), 1);
	return (out);
}
