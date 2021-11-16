#include "fpf.h"

int	main(void)
{
	int	data_a;
	int	data_b;

	data_a = ft_printf("%s\n", "string");
	data_b = printf("%s\n", "string");
	printf("data_a: %d\ndata_b: %d\n", data_a, data_b);
}
