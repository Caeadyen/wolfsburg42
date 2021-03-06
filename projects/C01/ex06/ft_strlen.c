/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:04:05 by hrings            #+#    #+#             */
/*   Updated: 2021/08/09 14:10:56 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		len;
	char	c;

	len = 0;
	c = *str;
	while (c != '\0')
	{
		len++;
		str++;
		c = *str;
	}
	return (len);
}
