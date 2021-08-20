/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:42:00 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 17:43:02 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_size;

	index = 0;
	src_size = 0;
	while (src[index] != '\0')
	{
		src_size++;
		index++;
	}
	if (size == 0)
		return (src_size);
	index = 0;
	while (index < (size - 1) && *src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	dest[index] = '\0';
	return (src_size);
}
