#include "fpf.h"

int	main(void)
{
	int	b_write1;
	int	b_write2;
	char	*p = "asdfasdf";

	b_write1 = printf("%p\n", -1);
	b_write2 = ft_printf("%p\n", -1);
	printf("b_write1: %d\nb_write2: %d\n", b_write1, b_write2);
}
