/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:26:06 by hrings            #+#    #+#             */
/*   Updated: 2021/08/16 11:00:19 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	index2 = 0;
	while (index2 < nb && src[index2] != '\0')
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
	return (dest);
}
