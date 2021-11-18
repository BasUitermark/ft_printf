#include "../fpf.h"

int	print_hex_upper(va_list args)
{
	int	out;

	out = ft_putstr_fd(ft_itoa_base(va_arg(args, size_t), \
	"0123456789ABCDEF"), 1);
	return (out);
}
