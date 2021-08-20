#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest, char *src);


int	main(void)
{
	char	test_dest1[20];
	char	test_dest11[20];
	char *p1;
	char *p11;
	char	test_dest2[20];
	char	test_dest22[20];
	char *p2;
	char *p22;
	char 	test_src1[] = "This is a test String";
	char 	test_src2[] = "";

	p1 = ft_strcpy(test_dest1, test_src1);
	p11 = strcpy(test_dest11, test_src1);
	printf("coping a string expected '%s' got '%s' \n", p11, p1);
	p2 = ft_strcpy(test_dest2, test_src2);
	p22 = strcpy(test_dest22, test_src2);
	printf("coping a string expected '%s' got '%s' \n", p22, p2);
}