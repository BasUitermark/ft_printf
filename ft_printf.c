#include "fpf.h"

int	check_format(int out, va_list args, char *str, int i)
{
	if (str[i] == 'c')
		out += print_char(out, args);
	else if (str[i] == 's')
		out += print_str(out, args);
	else if (str[i] == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_putstr_fd(ft_itoa_base(va_arg(args, size_t), \
		"0123456789abcdef"), 1);
	}
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (str[i] == 'u')
		ft_putstr_fd(ft_itoa_u(va_arg(args, unsigned int)), 1);
	else if (str[i] == 'x')
		ft_putstr_fd(ft_itoa_base(va_arg(args, unsigned int), \
		"0123456789abcdef"), 1);
	else if (str[i] == 'X')
		ft_putstr_fd(ft_itoa_base(va_arg(args, unsigned int), \
		"0123456789ABCDEF"), 1);
	else if (str[i] == '%')
		ft_putchar_fd('%', 1);
	return (out);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		out;
	va_list	args;

	va_start(args, str);
	i = -1;
	out = 0;
	if (!str)
		return (0);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			out = check_format(out, args, (char *)str, i + 1);
			i++;
		}
		else
			out += write(1, &str[i], 1);
	}
	return (out);
}

//TODO rewrite put functions to return int