#include <stdio.h>
void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char base1[] = "0123456789";
	char base2[] = "01";
	char base3[] = "0123456789ABCDEF";
	char base4[] = "poneyvif";
	char base5[] = "pone+yvif";
	char base6[] = "pone-yvif";
	char base7[] = "poneyviyf";
	char base8[] = "";
	char base9[] = "p";
	
	ft_putnbr_base(10,base3);
	printf("\n");
	ft_putnbr_base(-10,base3);
	printf("\n");
	ft_putnbr_base(-2147483648,base1);
	printf("\n");
	ft_putnbr_base(2147483647,base2);
	printf("\n");
	ft_putnbr_base(100,base3);
	printf("\n");
	ft_putnbr_base(100,base4);
	printf("\n");
	ft_putnbr_base(100,base5);
	printf("\n");
	ft_putnbr_base(100,base6);
	printf("\n");
	ft_putnbr_base(100,base7);
	printf("\n");
	ft_putnbr_base(100,base8);
	printf("\n");
	ft_putnbr_base(100,base9);
	printf("\n");
}