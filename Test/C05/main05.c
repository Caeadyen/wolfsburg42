#include <stdio.h>
int ft_sqrt(int nb);

int main(void)
{
	printf("Checking 0 as input should return 0 : %i \n", ft_sqrt(0));
	printf("Checking -2 as input should return 0 : %i \n", ft_sqrt(-2));
	printf("Checking 1 as input should return 1 : %i \n", ft_sqrt(1));
	printf("Checking 2 as input should return 0 : %i \n", ft_sqrt(2));
	printf("Checking 100 as input should return 10 : %i \n", ft_sqrt(100));
	printf("Checking 1000 as input should return 0 : %i \n", ft_sqrt(1000));
	printf("Checking 2147395600 as input should return 46340 : %i \n", ft_sqrt(2147395600));
	printf("Checking 2147483647 as input should return 0 : %i \n", ft_sqrt(2147483647));
}