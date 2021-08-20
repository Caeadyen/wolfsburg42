#include <stdio.h>
int ft_find_next_prime(int nb);

int main(void)
{
	printf("Checking 0 as input should return 2 : %i \n", ft_find_next_prime(0));
	printf("Checking -2 as input should return 2 : %i \n", ft_find_next_prime(-2));
	printf("Checking 1 as input should return 2 : %i \n", ft_find_next_prime(1));
	printf("Checking 2 as input should return 2 : %i \n", ft_find_next_prime(2));
	printf("Checking 100 as input should return 101 : %i \n", ft_find_next_prime(100));
	printf("Checking 1000 as input should return 1009 : %i \n", ft_find_next_prime(1000));
	printf("Checking 2147395600 as input should return 2147483647 : %i \n", ft_find_next_prime(2147483646));
	printf("Checking 2147483647 as input should return 2147483647 : %i \n", ft_find_next_prime(2147483647));
}