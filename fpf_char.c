#include "fpf.h"

int	fpf_char(va_list args, int i)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}
