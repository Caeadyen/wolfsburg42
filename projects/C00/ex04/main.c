/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:18:41 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 12:08:49 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_is_negative(int n);

int	main(void)
{
	printf(" :Checking 1");
	ft_is_negative(1);
	printf("\n :Checking -1");
	ft_is_negative(-1);
	printf("\n :Checking 0 ");
	ft_is_negative(0);
}
