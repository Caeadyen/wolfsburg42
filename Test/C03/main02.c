#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src);


int	main(void)
{
	char	test1[10]= "ABCDEF";
	char	test2[]= "123";
	char	test11[10]= "ABCDEF";
	char	test22[]= "123";
	char	test3[10]= "ABCDEF";
	char	test4[]= "";
	char	test33[10]= "ABCDEF";
	char	test44[]= "";
	char	test5[10]= "";
	char	test6[]= "123";
	char	test55[10]= "";
	char	test66[]= "123";

	printf("Testing 'ABC' and 'DEF' expecting %s got %s\n",strcat(test11,test22),ft_strcat(test1,test2));
	printf("Testing 'ABC' and 'DEF' expecting %s got %s\n",strcat(test33,test44),ft_strcat(test3,test4));
	printf("Testing 'ABC' and 'DEF' expecting %s got %s\n",strcat(test55,test66),ft_strcat(test5,test6));

}