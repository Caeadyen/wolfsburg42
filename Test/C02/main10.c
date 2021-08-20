/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:50:45 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 17:43:28 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t strlcpy(char * dst, const char * src, size_t maxlen);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	test_dest1[20];
	char	test_dest11[20];
	char	test_dest2[20];
	char	test_dest22[20];
	char	test_dest3[20];
	char	test_dest33[20];
	char	test_src[] = "123456789";
	unsigned int p1;
	size_t p11;
	unsigned int p2;
	size_t p22;
	unsigned int p3;
	size_t p33;
	p1 = ft_strlcpy(test_dest1, test_src, 10);
	p11 = strlcpy(test_dest11, test_src, 10);
	printf("Trying to copy '123456789' into size 10: expected %s, %zu got %s, %u \n",test_dest11,p11,test_dest1,p1);
	p2 = ft_strlcpy(test_dest2, test_src, 5);
	p22 = strlcpy(test_dest22, test_src, 5);
	printf("Trying to copy '123456789' into size 5: expected %s, %zu got %s, %u \n",test_dest22,p22,test_dest2,p2);
	p3 = ft_strlcpy(test_dest3, test_src, 0);
	p33 = strlcpy(test_dest33, test_src, 0);
	printf("Trying to copy '123456789' into size 0: expected %s, %zu got %s, %u \n",test_dest33,p33,test_dest3,p3);


}

size_t strlcpy(char * dst, const char * src, size_t maxlen) {
    const size_t srclen = strlen(src);
    if (srclen + 1 < maxlen) {
        memcpy(dst, src, srclen + 1);
    } else if (maxlen != 0) {
        memcpy(dst, src, maxlen - 1);
        dst[maxlen-1] = '\0';
    }
    return srclen;
}
