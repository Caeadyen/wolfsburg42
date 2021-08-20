#include <stdio.h>
int ft_is_prime(int nb);

int main(void)
{
	printf("Checking 0 as input should return 0 : %i \n", ft_is_prime(0));
	printf("Checking -2 as input should return 0 : %i \n", ft_is_prime(-2));
	printf("Checking 1 as input should return 0 : %i \n", ft_is_prime(1));
	printf("Checking 2 as input should return 1 : %i \n", ft_is_prime(2));
	printf("Checking 100 as input should return 0 : %i \n", ft_is_prime(100));
	printf("Checking 3019 as input should return 1 : %i \n", ft_is_prime(3019));
	printf("Checking 2147483646 as input should return 0 : %i \n", ft_is_prime(2147483646));
	printf("Checking 2147483647 as input should return 1 : %i \n", ft_is_prime(2147483647));
}