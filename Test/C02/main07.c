#include <stdio.h>
char *ft_strupcase(char *str);


int	main(void)
{
	char *p;
	char test[] = "GahhaAAAjjjaoeiAABBHH";
	p = ft_strupcase(test);
	printf("testing: 'GahhaAAAjjjaoeiAABBHH' and got %s\n",p);
}