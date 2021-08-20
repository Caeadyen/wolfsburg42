#include <stdio.h>
int  ft_str_is_printable(char *str);


int	main(void)
{
	printf("testing: 'SFLSKFKKSHDF' : ");
	printf("%i \n", ft_str_is_printable("SFLSKFKKSHDF"));
	printf("testing: 'SFLSKFalinebreakKKSHDF': ");
	printf("%i \n", ft_str_is_printable("SFLSKFa\nKKSHDF"));

}