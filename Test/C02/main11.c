#include <stdio.h>
void ft_putstr_non_printable(char *str);

int	main(void)
{
	char test1[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(test1);
	printf("\n");
	printf("Coucou\\0atu vas bien ?\n");
	printf("\n");
	char test2[5];
	test2[0] = -11;
	test2[1] = -110;
	test2[2] = -50;
	test2[3] = -60;
	test2[4] = '\0';
	ft_putstr_non_printable(test2);
	printf("\n");
	printf("\\f5\\92\\ce\\c4");
	printf("\n");
}