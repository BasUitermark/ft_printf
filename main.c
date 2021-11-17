#include "fpf.h"

int	main(void)
{
	int	b_write1;
	int	b_write2;

	b_write1 = 0;
	b_write2 = 0;
	b_write1 = printf("aaaa%c\n", 'a');
	b_write2 = ft_printf("aaaa%c\n", 'a');
	printf("b_write1: %d\nb_write2: %d\n", b_write1, b_write2);
}
