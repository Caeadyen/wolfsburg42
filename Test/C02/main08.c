#include <stdio.h>
char *ft_strlowcase(char *str);


int	main(void)
{
	char *p;
	char test[] = "GahhaAAAjjjaoeiAABBHH";
	p = ft_strlowcase(test);
	printf("testing: 'GahhaAAAjjjaoeiAABBHH' and got %s\n",p);
}