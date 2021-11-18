#include "../fpf.h"

int	print_hex_lower(va_list args)
{
	int	out;

	out = ft_putstr_fd(ft_itoa_base(va_arg(args, size_t), \
	"0123456789abcdef"), 1);
	return (out);
}
