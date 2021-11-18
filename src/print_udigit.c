#include "../fpf.h"

int	print_udigit(va_list args)
{
	int	out;

	out = ft_putstr_fd(ft_itoa_u(va_arg(args, unsigned int)), 1);
	return (out);
}
