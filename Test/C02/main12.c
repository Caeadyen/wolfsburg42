#include <stdio.h>
#include <string.h>
void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{	
	char test[] = "Hello, world    1234567890123456\n\t1";

	ft_print_memory(test,strlen(test));

}