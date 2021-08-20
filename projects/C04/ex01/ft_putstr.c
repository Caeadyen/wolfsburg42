/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:50:39 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 23:57:34 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}
