#include "fpf.h"

int	check_format(int out, va_list args, char *str, int i)
{
	if (str[i] == 'c' || str[i] == '%')
		out += print_char(out, args);
	else if (str[i] == 's')
		out += print_str(out, args);
	else if (str[i] == 'p')
		out += print_void(out, args);
	else if (str[i] == 'd' || str[i] == 'i')
		out += print_digit(out, args);
	else if (str[i] == 'u')
		out += print_udigit(out, args);
	else if (str[i] == 'x')
		out += print_hex_lower(out, args);
	else if (str[i] == 'X')
		out += print_hex_upper(out, args);
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
			out += check_format(out, args, (char *)str, i + 1);
			i++;
		}
		else
			out += write(1, &str[i], 1);
	}
	return (out);
}
