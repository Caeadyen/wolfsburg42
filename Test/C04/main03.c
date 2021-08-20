#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	char str1[] = "   ---+--+1234ab567";
	int result;

	result = ft_atoi(str1);
	printf("Converting string '   ---+--+1234ab567' to an int: expectin : -1234 got %i \n",result);
}