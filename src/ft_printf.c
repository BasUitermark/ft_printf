#include "../fpf.h"

int	check_format(va_list args, char *str, int i)
{
	int	out;

	out = 0;
	if (str[i] == 'c')
		out = print_char(args);
	else if (str[i] == 's')
		out = print_str(args);
	else if (str[i] == 'p')
		out = print_void(args);
	else if (str[i] == 'd' || str[i] == 'i')
		out = print_digit(args);
	else if (str[i] == 'u')
		out = print_udigit(args);
	else if (str[i] == 'x')
		out = print_hex_lower(args);
	else if (str[i] == 'X')
		out = print_hex_upper(args);
	else if (str[i] == '%')
		out = write(1, "%", 1);
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
			out += check_format(args, (char *)str, i + 1);
			i++;
		}
		else
			out += write(1, &str[i], 1);
	}
	return (out);
}
