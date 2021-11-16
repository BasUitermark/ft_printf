#include "../fpf.h"

int	print_char(int out, va_list args)
{
	char	c;

	c = va_arg(args, int);
	out += write(1, &c, 1);
	return (out);
}
