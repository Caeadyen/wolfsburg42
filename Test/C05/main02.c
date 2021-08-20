#include <stdio.h>
int ft_iterative_power(int nb, int power);

int main(void)
{
	printf("Checking 0 **0 as input should return 1 : %i \n", ft_iterative_power(0,0));
	printf("Checking 1 **-10 as input should return 0 : %i \n", ft_iterative_power(1,-10));
	printf("Checking 1 **1 as input should return 1 : %i \n", ft_iterative_power(1,1));
	printf("Checking -10 **3 as input should return -100 : %i \n", ft_iterative_power(-10,3));
	printf("Checking 2 **10 as input should return 1024 : %i \n", ft_iterative_power(2,10));
}