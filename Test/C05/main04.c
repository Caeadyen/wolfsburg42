#include <stdio.h>
int ft_fibonacci(int index);

int main(void)
{
	printf("Checking 0 as input should return 0 : %i \n", ft_fibonacci(0));
	printf("Checking 1 as input should return 1 : %i \n", ft_fibonacci(1));
	printf("Checking 2 as input should return 1 : %i \n", ft_fibonacci(2));
	printf("Checking -3 as input should return -1 : %i \n", ft_fibonacci(-3));
	printf("Checking 10 as input should return 55 : %i \n", ft_fibonacci(10));
	printf("Checking 20 as input should return 6765 : %i \n", ft_fibonacci(20));
	printf("Checking 20 as input should return 1836311903 : %i \n", ft_fibonacci(46));
}