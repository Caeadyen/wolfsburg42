#include <stdio.h>
int ft_str_is_lowercase(char *str);


int	main(void)
{
	printf("testing: 'dkslfjghkldfjgh' : ");
	printf("%i \n", ft_str_is_lowercase("dkslfjghkldfjgh"));
	printf("testing: 'dkslfAjghkldfjgh': ");
	printf("%i \n", ft_str_is_lowercase("dkslfAjghkldfjgh"));

}