#include <string.h>
#include <stdio.h>
int ft_putstr(char *str);

int main(void)
{

char str1[] = "Test String";
char str2[] = "";
char str3[] = "Test String 1237 100 \n \t 111";

printf("Printing :%s:end\n",str1);
ft_putstr(str1);
printf(":end\n");
printf("Printing :%s:end\n",str2);
ft_putstr(str2);
printf(":end\n");
printf("Printing :%s:end\n",str3);
ft_putstr(str3);
printf(":end\n");

}