/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:56:44 by hrings            #+#    #+#             */
/*   Updated: 2021/08/09 14:01:07 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c);

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		printchar(*str);
		str++;
		ft_putstr(str);
	}
}

void	printchar(char c)
{
	write(1, &c, 1);
}
