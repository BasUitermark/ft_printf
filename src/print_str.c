#include "../fpf.h"

int	print_str(int out, va_list args)
{
	char	*str;
	t_size	i;

	i = -1;
	str = va_arg(args, char *);
	while (str[++i])
		out += write(1, &str[i], 1);
	return (out);
}