#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);


int	main(void)
{
	char	test1[7]= "ABC";
	char	test2[4]= "DEF";
	ft_strncat(test1,test2,2);
	printf("Testing 'ABC' and 'DEF' expecting ABCDE got %s\n",test1);
	char	test3[7]= "ABC";
	char	test4[4]= "DEF";
	ft_strncat(test3,test4,6);
	printf("Testing 'ABC' and 'DEF' expecting ABCDEF got %s\n",test3);

}