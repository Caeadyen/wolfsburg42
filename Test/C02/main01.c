#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);


int	main(void)
{
	char	test_dest1[10];
	char	test_dest11[10];
	char	test_dest2[15];
	char	test_dest22[15];
	char *p1;
	char *p11;
	char *p2;
	char *p22;
	char	test_src[10] = "0123456789";
	p1 = ft_strncpy(test_dest1, test_src, 10);
	p11 = ft_strncpy(test_dest11, test_src, 10);
	printf("Trying strncopy with 10 from src: expected %.*s got %.*s \n",10,p1,10,p11);
	p2 = ft_strncpy(test_dest2, test_src, 15);
	p22 = ft_strncpy(test_dest22, test_src, 15);
	printf("Trying strncopy with 15 from src: expected %.*s got %.*s \n",20,p2,20,p22);


}