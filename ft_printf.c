#include "fpf.h"

int	check_format(va_list args, char *str, int i)
{
	int	c;

	if (str[i] == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (str[i] == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	// else if (str[i] == 'p')
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (str[i] == 'u')
		ft_putstr_fd(ft_itoa_u(va_arg(args, unsigned int)), 1);
	// else if (str[i] == 'x')
	// else if (str[i] == 'X')
	// else if (str[i] == '%')
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		out;
	va_list	args;

	va_start(args, str);
	i = -1;
	out = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			i = check_format(args, (char *)str, i + 1);
		else
			out += write(1, &str[i], 1);
	}
	return (out);
}
