/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:23:42 by hrings            #+#    #+#             */
/*   Updated: 2021/08/18 00:02:43 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	addline(char c);

int	main(void)
{
	ft_putnbr(2147483647);
	addline('\n');
	ft_putnbr(-2147483648);
	addline('\n');
	ft_putnbr(0);
	addline('\n');
}

void	addline(char c)
{
	write(1, &c, 1);
}
