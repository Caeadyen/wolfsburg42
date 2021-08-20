/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:35:46 by hrings            #+#    #+#             */
/*   Updated: 2021/08/11 12:33:50 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		printchar(nb + '0');
	}
	else if (nb > -10 && nb < 0)
	{
		printchar('-');
		printchar((nb * -1) + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		printchar(nb % 10 + '0');
	}
	else
	{
		printchar('-');
		ft_putnbr((nb / 10) * -1);
		printchar((nb % 10) * -1 + '0');
	}
}

void	printchar(char c)
{
	write(1, &c, 1);
}
