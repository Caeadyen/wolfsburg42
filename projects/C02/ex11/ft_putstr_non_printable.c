/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:53:43 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 20:30:46 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	unsigned char	current;

	while (*str != '\0')
	{
		current = *str;
		if (current >= 32 && current < 127)
		{	
			putchar(current);
		}
		else
		{
			putchar('\\');
			putchar("0123456789abcdef"[current / 16]);
			putchar("0123456789abcdef"[current % 16]);
		}
		str++;
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}
