#include "../fpf.h"

int	print_str(int out, va_list args)
{
	out += ft_putstr_fd(va_arg(args, char *), 1);
	return (out);
}
