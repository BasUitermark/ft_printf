#include "fpf.h"

void	print_test_char(char c)
{
	int	b_write0;
	int	b_write1;

	b_write0 = 0;
	b_write1 = 0;
	if (c)
	{
		// b_write0 = printf("%%\n", c);
		b_write1 = ft_printf("%%\n", c);
	}
}

int	main(void)
{
	print_test_char('%');
	return (0);
}
