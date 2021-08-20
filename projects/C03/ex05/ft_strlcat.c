/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:08:55 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 14:25:55 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	index;
	int				n;

	index = size;
	length_dest = 0;
	length_src = 0;
	while (dest[length_dest] != '\0')
		length_dest++;
	while (src[length_src] != '\0')
		length_src++;
	n = size - length_dest;
	if (n <= 0)
		return (length_src + size);
	index = 0;
	while (src[index] != '\0' && n > 1)
	{
		dest[length_dest + index] = src[index];
		index++;
		n--;
	}
	dest[length_dest + index] = '\0';
	return (length_dest + length_src);
}
