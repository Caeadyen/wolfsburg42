#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);


int	main(void)
{
	char	test1[]= "ABCDEF";
	char	test2[]= "CD";
	char	test3[]= "GH";
	char	test4[]= "";

	printf("Testing 'ABCDEF' and 'CD' expecting %s got %s\n",strstr(test1,test2), ft_strstr(test1,test2));
	printf("Testing 'ABCDEF' and 'GH' expecting %s got %s\n",strstr(test1,test3), ft_strstr(test1,test3));
	printf("Testing 'ABCDEF' and '' expecting %s got %s\n",strstr(test1,test4), ft_strstr(test1,test4));

}