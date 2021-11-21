#include "../fpf.h"

int	print_udigit(va_list args)
{
	int	out;

	out = ft_putnbr_fd(va_arg(args, unsigned int), 1);
	return (out);
}
