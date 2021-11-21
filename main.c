#include "fpf.h"

int	main(void)
{
	int	b_write1;
	int	b_write2;
	char	*p = "asdfasdf";

	// b_write1 = printf("%c\n%s\n%i\n%p\n%x\n%X\n%u\n%%", 'a', "this is a string", 42, p, -1, -1, -1);
	// b_write2 = ft_printf("%c\n%s\n%i\n%p\n%x\n%X\n%u\n%%", 'a', "this is a string", 42, p, -1, -1, -1);

	b_write1 = printf("%X\n", -1);
	b_write2 = ft_printf("%X\n", -1);

	
	printf("b_write1: %d\nb_write2: %d\n", b_write1, b_write2);
}
