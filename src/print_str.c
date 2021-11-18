#include "../fpf.h"

int	print_str(va_list args)
{
	int	out;

	out = ft_putstr_fd(va_arg(args, char *), 1);
	return (out);
}
