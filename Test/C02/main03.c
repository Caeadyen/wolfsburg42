#include <stdio.h>
int ft_str_is_numeric(char *str);


int	main(void)
{
	printf("testing: '3457305738' : ");
	printf("%i \n", ft_str_is_numeric("3457305738"));
	printf("testing: '3457a305738': ");
	printf("%i \n", ft_str_is_numeric("3457a305738"));

}