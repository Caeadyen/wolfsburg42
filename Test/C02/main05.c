#include <stdio.h>
int ft_str_is_uppercase(char *str);


int	main(void)
{
	printf("testing: 'SFLSKFKKSHDF' : ");
	printf("%i \n", ft_str_is_uppercase("SFLSKFKKSHDF"));
	printf("testing: 'SFLSKFaKKSHDF': ");
	printf("%i \n", ft_str_is_uppercase("SFLSKFaKKSHDF"));

}