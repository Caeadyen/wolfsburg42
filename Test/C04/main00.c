#include <string.h>
#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{

char str1[] = "Test String";
char str2[] = "";
char str3[] = "Test String 1237 100 \n \t 111";

int result1 = ft_strlen(str1);
int result2 = ft_strlen(str2);
int result3 = ft_strlen(str3);
printf("The length of the string1: expected: %lu - got : %d\n", strlen(str1), result1);
printf("The length of the string2: expected: %lu - got : %d\n", strlen(str2), result2);
printf("The length of the string3: expected: %lu - got : %d\n", strlen(str3), result3);
}