#include <stdio.h>
int ft_recursive_factorial(int nb);

int main(void)
{
	printf("Checking 0 as input should return 1 : %i \n", ft_recursive_factorial(0));
	printf("Checking -10 as input should return 0 : %i \n", ft_recursive_factorial(-10));
	printf("Checking 1 as input should return 1 : %i \n", ft_recursive_factorial(1));
	printf("Checking 10 as input should return 3628800 : %i \n", ft_recursive_factorial(10));
}