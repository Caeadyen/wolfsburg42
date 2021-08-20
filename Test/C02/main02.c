#include <stdio.h>
int ft_str_is_alpha(char *str);


int	main(void)
{
	printf("testing: 'ThisisatestString' : ");
	printf("%i \n", ft_str_is_alpha("ThisisatestString"));
	printf("testing: 'Thisisate1stString': ");
	printf("%i \n", ft_str_is_alpha("Thisisate1stString"));

}