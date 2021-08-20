#include <stdio.h>
int ft_strcmp(char *s1, char *s2);


int	main(void)
{
	char	test1[]= "ABC";
	char	test2[]= "AB";
	char	test3[]= "ABZ";
	char	test4[]= "ABJ";
	char c;
	c = 127;
	
	char	test6[]= "A";
	char	test7[]= "ABA";
	printf("Testing 'ABC' and 'ABC' expecting   0 : %i\n", ft_strcmp(test1,test1));
	printf("Testing 'ABC' and 'AB'  expecting  67 : %i\n", ft_strcmp(test1,test2));
	printf("Testing 'ABA' and 'ABZ' expecting -25 : %i\n", ft_strcmp(test7,test3));
	printf("Testing 'ABJ' and 'ABC' expecting   7 : %i\n", ft_strcmp(test4,test1));
	printf("Testing  DEL  and 'A'   expecting  62 : %i\n", ft_strcmp(&c,test6));

}