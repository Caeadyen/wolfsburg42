#include <stdio.h>
char *  ft_strcapitalize(char *str);


int	main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *p;
	p =  ft_strcapitalize(test);
	printf("expected : Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n and got : %s \n",p);
}