#include "fpf.h"

int	print_udigit(int out, va_list args)
{
	ft_putstr_fd(ft_itoa_u(va_arg(args, unsigned int)), 1);
	return (out);
}
