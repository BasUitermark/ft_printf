#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	b_write1;
	int	b_write2;
	char	*p = "asdfasdf";

	b_write1 = printf("%%%%c\n", 'a');
	b_write2 = ft_printf("%%%%c\n", 'a');
	printf("b_write1: %d\nb_write2: %d\n", b_write1, b_write2);
}
