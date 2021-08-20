#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);


int	main(void)
{
	char	test1[]= "ABC";
	char	test2[]= "AB";
	char	test3[]= "ABZ";
	char	test4[]= "ABJ";
	char	test5[]= "ZZZ";
	char c;
	c = 127;
	
	char	test6[]= "A";
	char	test7[]= "ABA";
	printf("Testing 'ABC' and 'ABC' expecting   %i got %i\n", strncmp(test1,test1,2),ft_strncmp(test1,test1,2));
	printf("Testing 'ABC' and 'AB'  expecting  %i got %i\n",  strncmp(test1,test2,3),ft_strncmp(test1,test2,3));
	printf("Testing 'ABA' and 'ABZ' expecting   %i got %i\n",  strncmp(test7,test3,2),ft_strncmp(test7,test3,2));
	printf("Testing 'ABJ' and 'ABC' expecting   %i got %i\n",  strncmp(test4,test1,3),ft_strncmp(test4,test1,3));
	printf("Testing  DEL  and 'A'   expecting  %i got %i\n",  strncmp(&c,test6,1),ft_strncmp(&c,test6,1));
	printf("Testing 'ABC' and 'ABC' expecting   %i got %i\n",  strncmp(test1,test1,5),ft_strncmp(test1,test1,5));
	printf("Testing 'ABC' and 'ZZZ' expecting   %i got %i\n",  strncmp(test1,test5,0),ft_strncmp(test1,test5,0));
	printf("Testing 'AB' and 'ABC'  expecting  %i got %i\n",  strncmp(test2,test1,3),ft_strncmp(test2,test1,3));


}