#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
size_t strlcat(char *dst, const char *src, size_t siz);

int	main(void)
{
	char	test1[10]= "ABCDEF";
	char	test2[]= "123";
	char	test11[10]= "ABCDEF";
	char	test22[]= "123";
	char	test3[10]= "ABCDEF";
	char	test4[]= "1234";
	char	test33[10]= "ABCDEF";
	char	test44[]= "1234";
	char	test5[10]= "ABCDEF";
	char	test6[]= "123";
	char	test55[10]= "ABCDEF";
	char	test66[]= "123";
	char	test7[10]= "ABCDEF";
	char	test8[]= "123";
	char	test77[10]= "ABCDEF";
	char	test88[]= "123";
	char	test9[10];
	test9[0] = '\0';
	char	testa[]= "123";
	char	test99[10];
	test99[0] = '\0';
	char	testaa[6]= "123";
	char	testb[10]= "ABCDEF";
	char	testc[6];
	testc[0] = '\0';
	char	testbb[10]= "ABCDEF";
	char	testcc[6];
	testcc[0] = '\0';
	unsigned int result1;
	unsigned int result2;
	unsigned int result3;
	unsigned int result4;
	unsigned int result5;
	unsigned int result6;
	unsigned int result11;
	unsigned int result22;
	unsigned int result33;
	unsigned int result44;
	unsigned int result55;
	unsigned int result66;
	result1 = ft_strlcat(test1,test2,8);
	result2 = ft_strlcat(test3,test4,5);
	result3 = ft_strlcat(test5,test6,1);
	result4 = ft_strlcat(test7,test8,10);
	result5 = ft_strlcat(test9,testa,10);
	result6 = ft_strlcat(testb,testc,10);
	result11 = strlcat(test11,test22,8);
	result22 = strlcat(test33,test44,5);
	result33 = strlcat(test55,test66,1);
	result44 = strlcat(test77,test88,10);
	result55 = strlcat(test99,testaa,10);
	result66 = strlcat(testbb,testcc,10);
	printf("Testing 'ABCDEF' and '123' and 8  buffer expecting %s got %s and %i (%i)\n",test11,test1,result1,result11);
	printf("Testing 'ABCDEF' and '123' and 5  buffer expecting %s got %s and %i (%i)\n",test33,test3,result2,result22);
	printf("Testing 'ABCDEF' and '123' and 1  buffer expecting %s got %s and %i (%i)\n",test55,test5,result3,result33);
	printf("Testing 'ABCDEF' and '123' and 10 buffer expecting %s got %s and %i (%i)\n",test77,test7,result4,result44);
	printf("Testing ''       and '123' and 10 buffer expecting %s got %s and %i (%i)\n",test99,test9,result5,result55);
	printf("Testing 'ABCDEF' and ''    and 10 buffer expecting %s got %s and %i (%i)\n",testbb,testb,result6,result66);

}

size_t strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}